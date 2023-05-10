#include <iostream>
using namespace std;

int main(){
    int r,x,n,a=0;
    cout<<"Enter a Number : ";
    cin>>n;
    while(n>0){
        if(n>0){
            r=n%10;
            n/=10;
            a=a*10+r;
        }
    }
    while(a>0){
        if(a>0){
        x=a%10;
        a/=10;
        switch (x){
            case 1:
                cout<<"One"<<" ";
                break;
            case 2:
                cout<<"Two"<<" ";
                break;
            case 3:
                cout<<"Three"<<" ";
                break;
            case 4:
                cout<<"Four"<<" ";
                break;
            case 5:
                cout<<"Five"<<" ";
                break;
            case 6:
                cout<<"Six"<<" ";
                break;
            case 7:
                cout<<"Seven"<<" ";
                break;
            case 8:
                cout<<"Eight"<<" ";
                break;
            case 9:
                cout<<"Nine"<<" ";
                break;
            case 0:
                cout<<"Zero"<<" ";
                break;
            default:
                break;
        }
        }
    }
}