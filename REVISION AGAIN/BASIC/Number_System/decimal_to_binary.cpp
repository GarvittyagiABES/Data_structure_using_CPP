#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int num;
 cout<<"Enter Decimal number : ";
 cin>>num;
 int ans=0,power=1;
 while(num>0)
 {
    int paritydigit=num%2;
     ans+=paritydigit*power;
    power*=10;
    num/=2;
 }
 cout<<"Binary form of your Decimal number is : "<<ans<<endl;


    
return 0;
}