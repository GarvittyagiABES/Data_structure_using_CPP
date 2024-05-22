#include <bits/stdc++.h>
using namespace std;
vector<int> first_and_last_position(vector<int> arr, int target)
{
    vector<int> ans;
    int l = 0, h = arr.size()-1;
    int mid;
    int first_pos = -1, last_pos = -1;
    while (h > l)
    {
        mid = (h + l) / 2;
        if (arr[mid] == target)
        {
            first_pos = mid;
            h = mid;
        }
        else if (arr[mid] > target)
        {
            h = mid;
        }
        else
        {
            l = mid + 1;
        }
    }
    ans.push_back(first_pos);
    l = 0, h = arr.size()-1;
    while (h > l)
    {
        mid = (h + l) / 2;
        // cout<<"\nmid is: "<<mid<<endl;
        if (arr[mid] == target)
        {
            last_pos = mid;
            l = mid + 1;
            // cout<<"l is: "<<l;
            // cout<<"\nh is: "<<h;
        }
        else if (arr[mid] > target)
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    ans.push_back(last_pos);
    return ans;
}
int main()
{
    vector<int> arr;
    int n, target;
    cout << "Enter the no. of element: ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter the target: ";
    cin >> target;
    vector<int> ans;
    ans = first_and_last_position(arr, target);
    if (ans[0] == ans[1])
    {
        cout << "Element present only  once \n";
        if (ans[1] == -1)
        {

            cout << "Element present at index :" << ans[0];
        }
        else
        {

            cout << "Element present at index :" << ans[1] << "";
        }
    }
    else
    {
        cout << "First index of target element is: " << ans[0];
        cout << "\n last index of target element is: " << ans[1];
    }

    return 0;
}