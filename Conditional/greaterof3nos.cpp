#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 nos : ";
    cin>>a>>b>>c;
    if(a>b && a>c){
        cout<<a<<"is greater";
    }
    else{
        if(b>c){
            cout<<b<<"is greater";
        }
    else{
        cout<<c<<"is greater";
        }
    }
    return 0;
}