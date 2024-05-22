#include <iostream>
using namespace std;
void printarray(int a[], int i, int n)
{
    if (i == n)
        return;

    cout << a[i] << "\t";
    return printarray(a, i + 1, n);
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
    cout << "Your array is \n";
    printarray(a, 0, n);

    return 0;
}