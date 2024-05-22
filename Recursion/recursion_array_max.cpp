#include<iostream>
using namespace std;
int maxelement(int a[],int i,int n)
{   if(i==n-1)
    return a[i];
    return max(a[i],maxelement(a,i+1,n));
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
    int m= maxelement(a,0,n);
    cout<<"\n max element is: "<<m;
return 0;
}