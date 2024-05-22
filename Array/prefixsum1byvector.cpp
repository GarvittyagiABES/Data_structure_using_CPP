#include <iostream>
#include <vector>
using namespace std;
void prefixsum(vector<int> &v)
{
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the element"<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    prefixsum(v);
    cout << "Prefix sum"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] <<" ";
    }
    return 0;
}