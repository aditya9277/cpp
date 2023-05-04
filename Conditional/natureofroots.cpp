#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,d;
    cout<<"Enter the coefficients a,b,c respectively : ";
    cin>>a>>b>>c;
    d=pow(b,2)-4*a*c;
    if(d==0){
        cout<<"Real and Equal Roots";
    }    
    else{
        if(d>0){
            cout<<"Real and Unequal roots";  
        }
        else{
            cout<<"Imaginary Roots";
        }
    }
    return 0;    
    
}