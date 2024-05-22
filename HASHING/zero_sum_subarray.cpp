#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int zero_sum_subarray(vector<int> &vec)
{
    unordered_map<int, int> m;
    int prefix_sum = 0;
    int maxlen = -1;


    for (int i = 0; i < vec.size(); i++)
    {
        prefix_sum += vec[i];

        if (prefix_sum == 0)
        {
            maxlen++;
        }

        if (m.find(prefix_sum) != m.end())
        {
            maxlen = max(maxlen, i - m[prefix_sum]);
        }
        else
        {
            m[prefix_sum] = i;
        }
    }
    return maxlen;
}
int main()
{
    int n;
    std::cin >> n;
    vector<int> vec;
    for (int i = 0; i < n; i++)
    {
        int ele;
        std::cin >> ele;
        vec.push_back(ele);
    }
    std::cout << zero_sum_subarray(vec);

    return 0;
}