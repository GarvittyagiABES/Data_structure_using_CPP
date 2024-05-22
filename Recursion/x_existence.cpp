#include <iostream>
#include <vector>
using namespace std;
int xexistence(int a[], int x, int n, int i)
{
   //if founded
    if (a[i] == x)
    {
        return 1;
    }
    //base case
    if(i==n)
    {
    return 0;
    }
    return xexistence(a, x, n, i+1);
}

int main()
{
    int n;
    cout << "Enter no. of element: ";
    cin >> n;
    int x, a[n];
    cout << "Enter element of array: ";
    for (int i = 0; i < n; i++)
    {

        cin >> a[i];
    }


    
    cout << "Enter x: ";
    cin >> x;
    int y=xexistence(a, x, n,0);
    if(y==1)
    {
        cout<<"YES";
    }
    else
    cout<<"NO";

    return 0;
}