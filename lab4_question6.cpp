#include <iostream>
using namespace std;
void prime(int x,int y)
{
    int i ,j, count=0;
for(i=(x+1);i<=y;i++)
{
 count=0;
 for(j=2;j<i;j++)
 {
   if(i%j==0)
    {
      count++;

    }
 }
if(count==0)
{
   cout<<i<<" ";
}
}
;
}
int main()
{
 int x,y;
 cout<<"Enter lower number : ";
 cin>>x;
 cout<<"Enter upper number : ";
 cin>>y;
 prime(x,y);

return 0;
}
