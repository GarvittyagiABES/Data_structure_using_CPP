#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a[50], n, q, b[50];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "Enter the number of queries: ";
    cin >> q;
    cout << endl;
    cout << "Enter the queries" << endl;
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < q; j++)
        {
            if (a[i] == b[j])
            {
                cout << b[j] << " is present in the array " << endl;

                b[j] = pow(10, 5);
            }
        }
    }
    cout << " Queries not present in array\n";
    for (int j = 0; j < q; j++)
    {
        if (b[j] != pow(10, 5))
        {
            cout << b[j] << " ";
        }
    }
    return 0;
}