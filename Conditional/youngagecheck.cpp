#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter age of the person : ";
    cin>>a;
    if(a>=12 && a<=50){
        cout<<"person is young.";
    }
    else{
        cout<<"person is not young.";
    }
    return 0;

}