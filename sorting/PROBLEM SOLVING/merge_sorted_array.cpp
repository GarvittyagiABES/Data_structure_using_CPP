#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void merge_sorted(int a[], int b[], int c[], int m, int n)
{
    int i = 0, j = 0, k = 0;
    while (i < m && j < n)
    {
        if (a[i] <= b[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = b[j++];
        }
    }
    while (i < m)
    {
        c[k++] = a[i++];
    }
    while (j < n)
    {
        c[k++] = b[j++];
    }
}
int main()
{
    int m, n, o;
    cout << "Enter the size and ele of first array: ";
    cin >> m;
    int a[m];
    cout<<"Enter the first array\n";
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }

    cout << "Enter the size and ele of second array: ";
    cin >> n;
    int b[n];
    cout<<"Enter the second array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    int c[n + m];
    merge_sorted(a, b, c, m, n);
    cout << "Merged array is \n";
    for (int i = 0; i < n + m; i++)
    {
        cout << c[i] << " ";
    }

    return 0;
}