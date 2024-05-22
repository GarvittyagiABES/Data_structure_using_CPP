#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int ch = 64;
    cout << "Enter n: ";
    cin >> n;

    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        for (int k = 0; k < n - i; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << (char)(ch + j);
        }
        cout << endl;
    }
    ch = 64;
    for (int i = 6; i <= 2*n - 1; i++)
    {
        for (int k = 0; k < i-5; k++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (2 * n - i) - 1; j++)
        {
            cout << (char)(ch + j);
        }
        cout << endl;
    }

    return 0;
}