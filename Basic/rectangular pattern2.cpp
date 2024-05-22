#include <iostream>
using namespace std;
int main()
{
    int i, j, n, m, s;
    cout << "Enter the number of row" << endl;
    cin >> n;
    cout << endl
         << "Enter the number of coloumn" << endl;
    cin >> m;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= m; j++)
        {
            if (i == 1 || i == n || j == 1 || j == m)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}