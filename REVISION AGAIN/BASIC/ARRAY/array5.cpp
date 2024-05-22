#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int unique_pair(vector<int> vec, int x)
{
    int i = 0, j = vec.size() - 1, count = 0;
    while (i < j)
    {

        if ((abs(vec[i]) + abs(vec[j])) == x)
        {
            count++;
            i++;
        }
        if ((abs(vec[i]) + abs(vec[j])) < x)
        {
            i++;
        }
        if ((abs(vec[i]) + abs(vec[j])) > x)
        {
            j--;
        }
    }

    return count;
}
int main()
{
    vector<int> vec;
    int n, x;
    cout << "Enter n: " << endl;
    cin >> n >> x;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        vec.push_back(ele);
    }

    cout << unique_pair(vec, x);

    return 0;
}