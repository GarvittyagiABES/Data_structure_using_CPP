#include <iostream>
using namespace std;
void subarray(int a[], int n)
{
    int x = 0;
    for (int i = 1; i < n; i++)
    {
        a[i] = a[i] + a[i - 1];
        for (int j = n - 2; j <= i; j--)
        {
            a[j] = a[j] + a[j + 1];
            if (a[i] == a[j])
            {
                x++;
                cout << "subarray possible : " <<x; 
            }
        }
    }
     
}
int main()
{
    int a[50], n;
    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    subarray(a, n);
    return 0;
}