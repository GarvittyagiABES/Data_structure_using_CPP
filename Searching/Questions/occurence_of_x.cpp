#include <bits/stdc++.h>
using namespace std;
int x_occurence(vector<int> arr, int x)
{
    int l = 0, ans = -1;
    int r = arr.size() - 1;
    
    while (r >= l)
    {
       int  mid = l + (r - l) / 2;
       
        if (arr[mid] == x)
        {
            ans = mid;
            r = mid - 1;
        }
        else if (arr[mid] > x)
        {
            r = mid - 1;
        }
        else if (arr[mid] < x)
        {
            l = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int n, key;
    vector<int> arr;
    cout << "enter number of element: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter x: ";
    cin >> key;
    if (x_occurence(arr, key) == -1)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Element is at index: " << x_occurence(arr, key);
    }

    return 0;
}