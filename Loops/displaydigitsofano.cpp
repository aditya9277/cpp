#include <iostream>
using namespace std;

int main(){
    int n,r;
    cout<<"Enter the Number : ";
    cin>>n;
    while(n>0){
        if(n>0){
        r=n%10;
        cout<<r<<endl;
        n/=10;
        }
    }

    return 0;
}
