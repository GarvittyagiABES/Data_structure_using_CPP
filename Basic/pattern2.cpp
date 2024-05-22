#include <iostream>
using namespace std;
int main()
{
    int n, m, i, j;
    cout << "Enter row" << endl;
    cin >> n;
    cout << "Enter coloum" << endl;
    cin >> m;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if((i+j)%2==0)
            cout<<"1";
            else{
                cout<<"2";
            }
        }
        cout<<endl;
    }

}