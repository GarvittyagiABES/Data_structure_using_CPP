#include <iostream>
using namespace std;
int main()
{
    int a, b, result = 1;
    cout << "enter the base" << endl;
    cin >> a;
    cout << "enter the exponent" << endl;
    cin >> b;
    for (int i = 1; i <= b; i++)
    {
        result *= a;
    }
    cout << a << " raise to power " << b << " is: " << result << endl;
    cout << "THANK YOU!!";
}