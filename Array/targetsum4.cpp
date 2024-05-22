#include <iostream>
using namespace std;
int main()
{
    int a[50], i, n;
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the array\n";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                a[i] = 0;
                a[j] = 0;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            cout << a[i] << " is unique element." << endl;
        }
    }
    return 0;
}