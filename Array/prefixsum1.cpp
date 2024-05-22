#include <iostream>
using namespace std;
void prefixsum(int a[], int n)
{
    for (int i = 1; i < n; i++)
    {
a[i]=a[i]+a[i-1];
    }
    return;
}
int main()
{
    int a[50], n;
    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    prefixsum(a, n);
    cout << "Array with prefix sum" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << endl;
    }
    return 0;
}