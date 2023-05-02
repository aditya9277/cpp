#include <iostream>
using namespace std;

int main(){
    int roll;
    cout<<"Enter Roll Number : ";
    cin>>roll;
    if(roll<1){
        cout<<"Roll Number is invalid";

    }
    else{
        cout<<"Roll Number is Valid";
    }
    return 0;
}