#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
 int num;
 cout<<"Enter Binary number : ";
 cin>>num;
 int ans=0,power=1;
 while(num>0)
 {
    int lastdigit=num%10;
    ans+=lastdigit*power;
    power*=2;
    num/=10;
 }
 cout<<"Decimal form of your binary number is : "<<ans<<endl;


    
return 0;
}