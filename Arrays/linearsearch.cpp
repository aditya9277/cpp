#include <iostream>
using namespace std;

int main()
{
    int A[10],n=10,key;
    cout << "Enter Numbers : ";
    for (int i = 0; i < n; i++){
        cin >> A[i];
    }
    cout<<"Enter key";
    cin>>key;
    for(int i=0;i<n;i++){
        if(key==A[i])
            cout<<"Element Found at "<<i;
    }
    return 0;
}