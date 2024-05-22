#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i == n / 2+1)
        {
            for(int  star=0;star<n;star++)
            {
                cout<<"*";
            }
        }
        else
        {
            for (int space = 1; space < 4; space++)
            {
                
                cout << " ";
            }
            for (int j = 0; j < 1; j++)
            {
                cout << "*";
            }
        }
            cout << endl;
    }

    return 0;
}