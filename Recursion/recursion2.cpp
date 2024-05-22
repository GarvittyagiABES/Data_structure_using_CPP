#include<iostream>
using namespace std;
int fib(int n)
{
    if (n==1||n==0)
    return n;
   
    return fib(n-2)+fib(n-1);
}
int main()
{
int n;
cin>>n;
cout<<n<<"th fibonacci number is : "<<fib(n);
return 0;
}