#include <iostream>
using namespace std;
int largestElementIndex(int array[], int size)
{
    int max_index = 0;

    for (int i = 0; i < size; i++)
    {
        if (array[i] > array[max_index])
        {
            max_index = i;
        }
        return max_index;
    }
}
int main()
{
    int n, a[10];
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter the array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int max_ele_index = largestElementIndex(a, n);
    cout<<max_ele_index;
    a[max_ele_index] = 0;
    int second_max_ele_index = largestElementIndex(a, n);
    cout << "Second largest element is: " << a[second_max_ele_index];
}