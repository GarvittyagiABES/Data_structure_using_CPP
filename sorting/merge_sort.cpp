#include <iostream>
using namespace std;
// time complexity of merge sort is nlogn
void merge(int arr[], int l, int mid, int r)
{     
    // cout<<"in merging\n";
    int an, bn;
    an = mid - l + 1;
    bn = r - mid;
    //   create two array of size an and bn
    int a[an], b[bn];
    for (int i = 0; i < an; i++)
    {
        a[i] = arr[i + l];
    }
    for (int j = 0; j < bn; j++)
    {
        b[j] = arr[j + mid + 1];
    }
    // cout<<"in merging2\n";
    int i = 0, j = 0, k = l;// i is initial index of first subarray a j is initial index of second subarray k is initial index of merged subarray
    while (i < an && j < bn)
    {
        if (a[i] < b[j])
        {
        arr[k++] = a[i++];
        }
        else
        {
            arr[k++] = b[j++];
        }
    }
    while (i < an)
    {
        arr[k++] = a[i++];
    }
    while (j < bn)
    {
        arr[k++] = b[j++];
    }
    // cout<<"in merging3\n";
}
void mergeSort(int arr[], int l, int r)
{
    // base case
    if (l >= r)
    {
        return;
    }
    // cout<<"in recursion\n";
    int mid = (l + r) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(arr, 0, n - 1);
    cout << "Array after sorting\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nThankyou";
    return 0;
}