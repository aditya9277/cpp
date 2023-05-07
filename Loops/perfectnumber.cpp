#include <iostream>
using namespace std;

int main(){
    int n,i,sum=0;
    cout<<"enter n : ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(n%i==0){
            sum+=i;
        }   
    }
    if(sum==2*n){
        cout<<"Perfect Number";
    }
    else
        cout<<"Not a perfect number";
    return 0;
}