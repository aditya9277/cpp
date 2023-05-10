#include <iostream>
using namespace std;

int main(){
    int n,r,a=0;
    cout<<"Enter the Number : ";
    cin>>n;
    while(n>0){
        if(n>0){
        r=n%10;
        a=a*10+r;
        n/=10;
        }
    }
    cout<<a;

    return 0;
}
