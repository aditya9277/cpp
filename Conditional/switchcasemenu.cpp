#include <iostream>
using namespace std;

int main(){

    cout<<"Menu\n"<<"1.Add\n"<<"2.Subtract\n"<<"3.Multiply\n"<<"4.Divide\n";
    int option;
    cout<<"Choose Option : ";
    cin>>option;
    int a, b, c;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    
    switch(option){
        case 1:c=a+b;
            break;
        case 2:c=a-b;
            break;
        case 3:c=a*b;
            break;
        case 4:c=a/b;
            break;
        default: cout<<"Invalid Options choosen";
    }
    
    cout<<"Answer is : "<<c<<endl;
    return 0;
    
}