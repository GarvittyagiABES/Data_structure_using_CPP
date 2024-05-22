#include<iostream>
using namespace std;
int main()
{   int a[50],n,k,b[50],j=0;
cout<<"Enter the size of array: ";
cin>>n;
cout<<"Enter the array"<<endl;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Enter number of steps it rotated: ";
cin>>k;
k=k%n;
for(int i=n-k;i<n;i++)
{
    b[j++]=a[i];
}
for( int i=0;i<=k;i++)
{
    b[j++]=a[i];
}
cout<<"Resultant array"<<endl;
for( int i=0;i<n;i++)
{
    cout<<i+1<<"th element of resultant array:"<<b[i]<<endl;
}

    return 0;
}