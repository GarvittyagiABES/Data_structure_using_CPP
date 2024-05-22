#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int key)
{
    //  time complexity of binary search using iteration  is  O(logn)
    //  space complexity for binary search using iteration is O(log n );
    int l = 0;
    int r = arr.size();
    while (r >= l)
    {
        int mid = (l + r) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            l = mid + 1;
        }
        if (arr[mid] > key)
        {
            r = mid - 1;
        }
    }
    return -1;
}
int binarySearchwithRecursion(int l, int r, vector<int> arr, int key)
{
    //  time complexity of binary search using recursion is  O(logn)
    //  space complexity for binary search using recursion is O(log n) because during recursion of stack call; 
    if (l > r)
    {
        return -1;
    }
    int mid = (l + r) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        binarySearchwithRecursion(l, mid - 1, arr, key);
    }
    else if (arr[mid] < key)
    {
        binarySearchwithRecursion(mid + 1, r, arr, key);
    }
    return -1;
}
int main()
{
    vector<int> arr;
    int n, key;
    cout << "Enter number of element: ";
    cin >> n;
    cout << "Enter the element\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
    cout << "Enter the element to be searched: ";
    cin >> key;
    if (binarySearch(arr, key) == -1)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Element is at index: " << binarySearch(arr, key);
    }
    if (binarySearchwithRecursion(0, n - 1,arr, key) == -1)
    {
        cout << "Element not found\n";
    }
    else
    {
        cout << "Element is at index: " << binarySearchwithRecursion(0, n - 1, arr, key);
    }

    return 0;
}
/* we have to modify mid to tackle overflow
        so we have to  calculate mid using formula l+(r-l)/2;

       mid =(l+r)/2 = (l+r+l-l)/2=(2l+r-l)/2=l+(r-l)/2;
         OR
         mid=l+(r-l)/2
*/