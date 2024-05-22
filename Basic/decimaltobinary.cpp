#include <iostream>
using namespace std;
int main()
{int n,ans=0,pow=1;
    cout<<"Enter the number in decimal form "<<endl;
    cin>>n;
    while(n>0)
    {
        int paritydigit=n%2;
        ans+=paritydigit*pow;
        pow*=10;
        n/=2;
    } cout<<"Number in binary is : "<<ans;

    return 0;  
}