#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    int m, n;
    vector<int> arr1;
    vector<int> arr2;
    vector<int> new_arr;
    cout << "Enter size of arr1" << endl;
    cin >> n;
    cout << "Enter elements of arr1" << endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr1.push_back(ele);
    }
    cout << "Enter size of arr2" << endl;
    cin >> m;
    cout << "Enter elements of arr2" << endl;

    for (int i = 0; i < m; i++)
    {
        int ele;
        cin >> ele;
        arr2.push_back(ele);
    }
    int j = 0;

    for (int i = 0; i < m + n; i++)
    {
        if (i > n)
        {
            new_arr.push_back(arr2[j]);
            j++;
            continue;
        }
        if (j > m)
        {
            new_arr.push_back(arr1[i]);
            continue;
        }
        if (arr1[i] > arr2[j])
        {
            new_arr.push_back(arr2[j]);
            j++;
            i--;
        }
        else
        {
            new_arr.push_back(arr1[i]);
        }
    }
    // print the resultant array
    for (int i = 0; i < m + n; i++)
    {
        cout << new_arr[i] << " ";
    }
    cout << endl;

    return 0;
}