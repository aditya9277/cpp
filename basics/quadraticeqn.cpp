#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int b,a,c,r,d;
    cout<<"Enter values of a b c : ";
    cin>>a>>b>>c;
    d = pow(2,b) - 4*a*c;
    r = (-b + sqrt(d))/(2*a);
    cout<<"The roots of the equation are : "<<r;

    return 0;

}