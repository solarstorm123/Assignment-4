#include <iostream>
using namespace std;

float diameter(float x)
{
    float d=2*x;
    return d;
}
float circum (float x)
{
    float circum=2*3.14*x;
    return circum;
}
float area(float x)
{
    float area=3.14*x*x;
    return area;
}

int main()
{
    float r;
    cout<<"enter the radius :";
    cin>>r;
    cout<<"the diameter is "<<diameter(r)<<endl;
    cout <<"the circumference is "<<circum(r)<<endl;
    cout<<"area is "<<area(r)<<endl;


    return 0;
}
