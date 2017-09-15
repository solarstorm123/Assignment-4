#include <iostream>
#include <cmath>

using namespace std;

void arm(int x,int a)
{
 int z=x+1 ,alpha;

 while(z<a)
 {
  int f=z ,y=f ,arm=0 ,num=0;
 while (f>0)
 {
     num++;
     f/=10;
 }
 while(y>0)
 {
     alpha=y%10;
     arm=arm+pow(alpha,num);
     y/=10;
 }
 if(arm==z)
    cout<<arm<<" ";
 z++;

}
}
int main()
{
    int x,a;
    cout<<"enter two numbers :"<<endl;
    cin>>x>>a;
    arm(x,a);
    return 0;
}
