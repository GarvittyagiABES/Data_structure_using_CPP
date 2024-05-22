#include <iostream>
#include <vector>
using namespace std;

int subarray(vector<int> &v)
{
    int x = 0;
    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
        for (int j = v.size() - 2; j <= i; j++)
        {
            v[j] = v[j] + v[j + 1];

            if (v[i] == v[j])
            {
                x++;
               // cout << "Subarray possible: " << x<<endl;
            }
        }
    }return x;
}

int main()
{
    int n;
    vector<int> v;

    cout << "Enter the number of element: ";
    cin >> n;
    cout << "Enter the element" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
    cin>>ele;
         v.push_back(ele);
    }
  int  x= subarray(v);
  cout<<"Subarray possible: "<<x;
    return 0;
}