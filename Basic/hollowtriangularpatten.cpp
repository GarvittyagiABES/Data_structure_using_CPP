#include <iostream>
using namespace std;
int main()
{
    int n, i, j;
    cout << "Enter n" << endl;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (int s = 1; s <= n - i; s++)
        {
            cout << " ";
        }
        for (j = 1; j <= n; j++)
        {
            if (i + j == 4|| j - i == 2 || i == n)
            {
                cout << i;
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}