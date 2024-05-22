#include <iostream>
using namespace std;
void inc_seq(int n)
{
    static int m = 1;
    if (n < 1)
    {
        
        return;
    }
    cout << m << " ";
    m++;
    return inc_seq(n - 1);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    inc_seq(n);

    return 0;
}