#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cout<<"Enter value of n : ";
    cin>>n;
    sum = n*(n+1)/2;
    cout<<"Sum of first "<<n<<" natural numbers is : "<<sum;

    return 0;
}