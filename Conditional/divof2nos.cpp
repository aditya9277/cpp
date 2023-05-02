#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter 3 numbers ";
    cin>>a>>b;

    if(b==0){
        cout<<"Division By Zero"<<endl;
    }
    else{
        c=a/b;
        cout<<"Division of 2 numbers is "<<c;
    }
    return 0;
}