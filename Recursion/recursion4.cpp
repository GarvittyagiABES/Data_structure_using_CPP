#include<iostream>
#include<math.h>
using namespace std;
int ppowerq2(int p,int q)
{
    if(q==0)
    {
        return 1;
    }
   if(q%2==0)
   {
    int res= ppowerq2(p,q/2);
    return res*res;
   }
   if(q%2==1)
   {
   int res=ppowerq2(p,(q-1)/2);
   return res*res*p;}
}
int ppowerq(int p,int q)
{
if(q==0)
return 1;
return p*ppowerq(p,q-1);
}
int main()
{int p,q;
cout<<"Enter base and exponent : ";
cin>>p>>q;
cout<<p<<"^"<<q<<"is : "<<ppowerq(p,q)<<endl;
cout<<p<<"^"<<q<<"is : "<<ppowerq2(p,q);

return 0;
}
