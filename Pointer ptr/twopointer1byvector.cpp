#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter the number of element: ";
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] == 0)
        {
            count++;
        }
    }
    for (int i = 0; i < count; i++)
    {
       v[i]=0;;
    }
    for(int i=count;i<n;i++)
    {
        v[i]=1;
    }
    cout<<"After sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}