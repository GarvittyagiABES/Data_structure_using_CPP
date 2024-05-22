#include <iostream>
#include <math.h>
using namespace std;
int isArmstrong(int n, int d)
{
    if (n == 0)
    {
        return 0;
    }

    return pow(n % 10, d) + isArmstrong(n / 10, d);
}
int main()
{

    int n, d = 0;
    cout << "Enter the number: ";
    cin >> n;
    int temp=n;
    while (n > 0)
    {
        n /= 10;
        d++;
    }
    // cout << "NO. OF DIGIT: " << d << endl;
    // cout<<temp<<endl;
    int res = isArmstrong(temp, d);
    // cout<<"RESULT IS : "<<res<<endl;
        if (temp == res)
    {
        cout << "YES! ARMSTRONG ";
    }
    else
        cout << "NO! ARMSTRONG ";

    return 0;
}