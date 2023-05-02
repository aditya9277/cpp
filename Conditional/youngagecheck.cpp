#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter age of the person : ";
    cin>>a;
    if(a>=12 && a<=50){
        cout<<"young";
    }
    else{
        cout<<"not young";
    }
    return 0;

}