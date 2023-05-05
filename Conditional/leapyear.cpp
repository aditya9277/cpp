#include <iostream>
using namespace std;

int main(){
    int y;
    cout<<"Enter a year : ";
    cin>>y;
    if(y%4==0 && y%100==0){
        cout<<"It is not a leap year";
    }
    else if(y%100!=-0 && y%400==0){
        cout<<"It is a leap year";
    }
    else if(y%4==0){
        cout<<"It is a leap year";
    }
    return 0;

}