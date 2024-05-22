#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the value of a"<<endl;
    cin >> a;
    cout << "Enter the value of b"<<endl;
    cin >> b;
    c = a;
    a = b;
    b = c;
    cout << "Value after swapping are:"<<endl<<"a="<< a<<endl << "and" << endl<<"b="    <<b ;
}

