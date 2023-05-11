#include <iostream>
using namespace std;

int main(){
    int A[]={7,2,1,3,8,9}, sum=0,n=6;
    for(int i=0;i<7;i++){
        sum+=A[i];
    }
    cout<<sum;
    return 0;
}