#include<iostream>
using namespace std;
bool chk_pallindrome(int num,int *temp)
{
  if(num<=9&&num>=0)
  { int lastdigit=(*temp)%10;
  (*temp)/=10;
  return (num==lastdigit);
  }
  bool res=(chk_pallindrome(num/10,temp)and (num%10)==((*temp)%10));
  (*temp)/=10;
  return res  ;
}
int main()
{ int num;
cout<<"Enter the number: ";
cin>>num;
int n=num;
int *temp=&num;

if(chk_pallindrome(n,temp))
{
    cout<<" pallindrome";
}
else 
{
    cout<<"Not pallindrome";
}
return 0;
}