#include<iostream>
#include<cmath>

using namespace std;


// first program
bool checkifprime(int n) {
    bool isPrime = true;

    
    if (n == 0 || n == 1) {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= n / 2; ++i) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}

//2nd program
bool isSquare(int n){
    for (int i = 1; i*i <= n; i++)
    {
        if ((n%i==0) && (n/i==i))
        {
            return true;
        }
        
    }
   return false; 
}

//3rd program
bool isCube(int n){
    for (int i = 1; i <= n; i++)
    {
        if (i*i*i==n)
        {
            return true;
        }
        
    }
   return false; 
}

//4th program
int factorial(int n){
    if(n>1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
}

//5th
bool pal(int n){
    bool isPal=true;
    int rev,temp,s=0;
    temp = n;
    while (n>0)
    {
       rev = n%10;
       s=(s*10)+rev;
       n=n/10;
    }
    if (temp==s)
    {
        return true;
    }
    else return false;
}


//6th
bool ifneon(int n){
    
      int sq = n*n;
      int sum = 0;
      while (sq!=0){
          sum = sum + (sq % 10);
          sq = sq / 10;
    }
    if (sum==n){
        return true;
    }
     else  return false;
}


//7th
void fibo(int n){
    int a=0, b=1,c;
    c = a + b;

    while (c<=n){
        cout<<c<<", ";
        a=b;
        b=c;
        c=a + b;
    }
    
}


//8th
//if input is given 153 it works on online ide's
//not sure if it works on vs code
bool ifArm(int n){
    int r, og, d=0, final=0, value;
    
    og = n;
    while(og!=0){
        og /= 10;
        ++d;
    }
    
    og = n;
    while(og!=0){
        r = og % 10;
        value = pow(r, d);
        final += value;
        og /= 10;
    }
    if(final==n){
        return true;
    }
    else return false;
}


//9th
//This code was running wrong for inputs 135 & 175 on my vscode
//But ran properly for the both inputs when it was run on 
//Codechef/geeksforgeeks/programiz IDE
int count_size(int n){
    int z = n;
    int size=0;
    while (z){
        z = z/10;
        size++;
    }
    return size;
    
}

//9th
bool ifDisarium(int n){
    int countSize=count_size(n);
    int final=0, r;
    int z=n;
    while (z){
        r = z%10;
        final = final + pow(r, countSize--);
        z = z/10;
    }
    return (final==n);
}


//10th
bool ifHarshad(int n){
    int q = n;
    int sum=0;
    while (q){
        int r = q%10;
        sum += r;
        q /= 10;
    }
    return (n%sum == 0);    
}



int main(){

   long int var1;
   char var2;
  
   cout<<"Enter a positive number: "<<endl;
   cin>>var1;
  
   cout<<"Select from the following operations:"<<endl;   
   cout<<" 0 --> To find if number is Prime number"<<endl;   
   cout<<" 1 --> To find if the number is Square number"<<endl;   
   cout<<" 2 --> To find if the number is Cube number"<<endl;   
   cout<<" 3 --> To find the Factorial of that number"<<endl;   
   cout<<" 4 --> To find if the number is Palindrome number"<<endl;   
   cout<<" 5 --> To find if the number is Neon number"<<endl;   
   cout<<" 6 --> To print Fibonacci series till that number"<<endl;   
   cout<<" 7 --> To find if the number is Armstrong number"<<endl;   
   cout<<" 8 --> To find if the number is Disarium number"<<endl;   
   cout<<" 9 --> To find if the number is Harshad Number"<<endl;
   cout<<endl;
   
   cin>>var2;

   switch (var2)
   {
   case '0':
       (checkifprime(var1))?cout<<"\n"<<var1<< " is a prime number.":cout<<"\n"<<var1<<" is not a prime number."; 
        break;
   
   case '1':
       (isSquare(var1))?cout<<"\n"<<var1<<" is square number"<<endl:cout<<"\n"<<var1<<" is not a square number"<<endl;
       break;
   
   case '2':
       (isCube(var1))?cout<<"\n"<<var1<<" is a cube number"<<endl:cout<<"\n"<<var1<<" is not a cube number"<<endl;
       break;
   
   case '3':
       cout<<"\n"<<"Factorial of "<<var1<<" is "<<factorial(var1)<<endl;
       break;
   
   case '4':
       (pal(var1))?cout<<"\n"<<var1<<" is a palindrome"<<endl:cout<<"\n"<<var1<<" is not a palindrome"<<endl;
       break;
   
   case '5':
       (ifneon(var1))?cout<<"\n"<<var1<<" is a neon number"<<endl:cout<<"\n"<<var1<<" isn't a neon number"<<endl;
       break;
   
   case '6':
       cout<<"\n"<<"Fibonacci series: "<<0<<", "<<1<<", ";
       fibo(var1);
       break;
   
   case '7':
       (ifArm(var1))?cout<<"\n"<<var1<<" is an Armstrong number"<<endl:cout<<"\n"<<var1<<" isn't an Armstrong number"<<endl;
       break;
   
   case '8':
       (ifDisarium(var1))?cout<<"\n"<<var1<<" is a Disarium number"<<endl:cout<<"\n"<<var1<<" isn't a Disarium number"<<endl; 
       break;
   
   case '9':
       (ifHarshad(var1))?cout<<"\n"<<var1<<" is a Harshad number"<<endl:cout<<"\n"<<var1<<" isn't a Harshad number"<<endl;
       break;
   
   
   default:
         cout<<"Invalid input"<<endl;   
       break;
   } 
   
   return 0;
}