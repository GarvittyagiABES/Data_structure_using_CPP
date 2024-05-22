#include <iostream>
#include <vector>
using namespace std;
void sortsquare(vector<int> &v,vector<int>&ans)
{
    for (int i = 0; i < v.size(); i++)
    {
        int right_ptr = v.size() - 1;
        int left_ptr = 0;
        while (left_ptr < right_ptr)
        {
            if (v[left_ptr] > v[right_ptr])
            {
                ans.push_back(v[right_ptr]);
              left_ptr++;
                
            }
            else 
            {
                right_ptr--;
            }
        }
        return;
    }
}
int main()
{
    vector<int> v;
    vector<int> ans;
    int n;
    cout << "Enter the number of element: ";
    cin >> n;
    cout<<"Enter element"<<endl;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        v.push_back(ele * ele);
    }
    sortsquare(v,ans);
    cout << "After arranging" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << endl;
    }
    return 0;
}