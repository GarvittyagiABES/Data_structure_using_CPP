#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m;
    cout << "Enter the number of row" << endl;
    cin >> n;
    cout << endl
         << "Enter the number of coloumn" << endl;
    cin >> m;
    for (i = 1; i <= n; i++)
    {
        for (j = i; j <= m; j++)
        {
            cout << j;
        }
        for (j = 1; j <= i - 1; j++)
        {
            cout << j;
        }

        cout << endl;
    }
     return 0;
}