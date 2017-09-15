#include <iostream>
using namespace std;
void strong(int x,int y)
{
    int i=x+1 ,factorial=1 ;


       while(i<y)
       {int z=i ,sum=0;
       while(z>0)
    {
       int k=z%10 ,factorial=1;
       while (k>0)
        {

            factorial=factorial*k;
            k--;
        }
       sum=sum+factorial;

       z/=10;
    }
     if (sum==i)
        cout<<i<<" " ;
    i++;
}
}

int main()
{
    int x,y;
    cout<<"enter two number:"<<endl;
    cin>>x>>y;
    strong(x,y);
    return 0;
}
