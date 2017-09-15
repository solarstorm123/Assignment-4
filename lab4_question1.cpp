#include <iostream>
using namespace std;
int cube(int x)
{ int z=x*x*x;
  return z;
}
int main()
{
    int x;
    cout<<"enter a number:";
    cin>>x;
    cout<<cube(x);
    return 0;
}
