#include<iostream>
using namespace std;
int arraysum(int a[],int i,int n)
{ int sum=0;
    if(i==n-1)
    return a[i];

    
    return a[i]+arraysum(a,i+1,n);
    
}
int main()
{
int n, a[10];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int s=arraysum(a,0,n);
    cout<<"\nThe sum is : "<<s;
return 0;
}