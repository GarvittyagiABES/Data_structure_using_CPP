#include <iostream>
#include <vector>
using namespace std;
void elementarrange(vector<int> &v)
{
    int left_ptr = 0;
    int right_ptr = v.size() - 1;
    while (left_ptr < right_ptr)
    {
        if (v[left_ptr] % 2 == 0)
        {
            left_ptr++;
        }
       else  if (v[right_ptr] % 2 == 1)
        {
            right_ptr--; 
        }
       else if (v[left_ptr] % 2 == 1 && v[right_ptr] % 2 == 0)
        {
            swap(v[left_ptr], v[right_ptr]);
            left_ptr++;
            right_ptr--;
        }
        
    }
}
int main()
{
    vector<int> v;
    int n;
    cout << "Enter number of element";
    cin >> n;
    cout << "Enter element\n";
    for (int i = 0; i < n; i++)
    {
        int ele;
       
        cin >> ele;
        v.push_back(ele);
    }
    elementarrange(v);
    cout << "after arranging\n";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}