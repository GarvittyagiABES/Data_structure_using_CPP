#include <iostream>
using namespace std;
void kmulnum(int num, int k)
{
    if (k == 1)
    {
        cout << num << " ";
        return;
    }
    cout << num * k << " ";
    return kmulnum(num, (k - 1));
}

int main()
{
    int num, k;
    cout << "Enter number and k:  ";
    cin >> num >> k;
    kmulnum(num, k);

    return 0;
}