#include <iostream>
using namespace std;

int main(){
    int A[]={4,13,5,6,9,11,7},x=0;
    for(int i=0;i<6;i++){
        if(A[i]>x){
            x=A[i];
        }
    }
    cout<<x;
}