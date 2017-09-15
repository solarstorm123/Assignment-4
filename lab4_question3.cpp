#include <iostream>
using namespace std;

void mini(float x, float y)
{

    if (x>=y)
    {cout<<"the greater number is "<<x<<endl;}
    else {cout<<"the greater number is "<<y<<endl;}


}

int main ()
{
    float x,y;
    cout <<"enter the numbers ."<<endl;
    cout <<"first number :";
    cin>>x;
    cout<<"second number :";
    cin>>y;
    mini(x,y);

    return 0;
}
