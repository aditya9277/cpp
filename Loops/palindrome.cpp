#include <iostream>
using namespace std;

int main(){
    int n,d,m,r=0;
    cout<<"Enter number : ";
    cin>>n;
    m=n;
    while(n>0){
        if(n>0){
            d=n%10;
            n/=10;
            r=r*10+d;
        }
    }
    if(r==m)
        cout<<"Palindrome";
    else if(r!=m)
        cout<<"Not a Palindrome";
    
    return 0;
}