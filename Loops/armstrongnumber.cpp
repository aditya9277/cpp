#include <iostream>
using namespace std;

int main(){
    int n,r,m,a=0;
    cout<<"Enter the Number : ";
    cin>>n;
    m=n;
    while(n>0){
        if(n>0){
        r=n%10;
        a=a+r*r*r;
        n/=10;
        }
    }
    if(a==m)
        cout<<"Armstrong Number";

    return 0;
}
