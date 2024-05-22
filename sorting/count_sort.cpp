#include <iostream>
#include <vector>
using namespace std;
// if our max ele is greater greater than n than time complexity is O(n) and vice versa  and space complexity is O(n+max);
void countSort(vector<int> &arr)
{
    int n = arr.size();
    //  step-1 find the max ele
    int max = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    // cout << "max is : " << max << endl;
    //  step-2 create the frequency array
    vector<int> freq(max + 1, 0);
    for (int i = 0; i < n; i++)
    {
        freq[arr[i]]++;
    }
    //  step-3 calculate commulative frequency
    for (int i = 1; i < max + 1; i++)
    {
        freq[i] += freq[i - 1];
    }

    //  step-4 calculate the sorted array
    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    vector<int> arr;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    countSort(arr);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nThankyou";

    return 0;
}