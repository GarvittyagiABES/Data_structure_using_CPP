#include <iostream>
#include <vector>
using namespace std;
// compare two adjacent element and swap them is first element is greater than second 
void bubblesort(vector<int> &v)
{
    int c = 0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v.size() - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            { // c is used only for optimising the code
                c++;
                swap(v[j], v[j + 1]);
            }
        }
        if (c == 0)
        {
            break;
        }
    }
}
int main()
{
    int n;
    vector<int> v;
    cout << "Enter no of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele);
    }
    bubblesort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}