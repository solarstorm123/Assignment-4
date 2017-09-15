#include <iostream>
using namespace std;

void even(int x)
{
    if (x>=0)
    {
        if(x%2==0)
            cout<<"the number is even.";
        else {cout<<"the number is odd.";}
    }
    else{cout<<"entered number is invalid."; }
}
int main()
{
    int x;
    cout<<"enter a positive integer."<<endl;
    cin>>x;
    even(x);

    return 0;
}
