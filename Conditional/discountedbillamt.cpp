#include <iostream>
using namespace std;

int main(){
    float x,d;
    cout<<"Enter Bill Amount : ";
    cin>>x;
    if(x>=500){
        d=20.0/100*x;
    }
    else if(x>=100 && x<500){
        d=10.0/100*x;
    }
    else{
        d=0;
    }
    cout<<"Your bill amount is : "<<x<<endl;
    cout<<"Your Discount is : "<<d<<endl;
    cout<<"Your final price is : "<<x-d<<endl;

    return 0;

}