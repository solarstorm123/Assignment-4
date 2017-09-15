#include <iostream>
#include <cmath>

using namespace std;

void arm(int x)
{
 int z=x ,num=0 ,arm=0 ,y=x ,alpha;
 while (z>0)
 {
     num++;
     z/=10;
 }
 while(y>0)
 {
     alpha=y%10;
     arm=arm+pow(alpha,num);
     y/=10;
 }
 if (arm==x)
 {
     cout<<"the number is an armstrong number."<<endl;
 }
 else{cout<<"the number is not an armstrong number."<<endl;}

}

void perfect(int x)
{
    int y=x ,z=1 ,perfect=0;
    while (z<y)
    {
        if(y%z==0)
        perfect=perfect+z;
        z++;
    }
    if(perfect==x)
    {
        cout<<"the number is a perfect number."<<endl;
    }
    else{cout<<"the number is not a perfect number."<<endl;}
}

 void prime(int x)
 {
     int z=2 ,num=0;
     while(z<x)
     {
         if(x%z==0)
            num++;
         z++;
     }
     if(num>1)
            cout<<"the number is not prime"<<endl;
         else{cout<<"the number is prime."<<endl;}
 }

 int main()
 {
     int x;
     cout<<"enter a number :"<<endl;
     cin>>x;
     arm(x);
     perfect(x);
     prime(x);

     return 0;
 }
