#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
vector<int> res(vector<int> input, int target)
{
    vector<int> ans(2, -1);
    unordered_map<int, int> m;
    for (int i = 0; i < input.size(); i++)
    {
        if (m.find(target - input[i]) != m.end())
        {
            ans[1] = i;
            ans[0] = m[target - input[i]];
        }
        else
        {
            m[input[i]] = i;
        }
    }
    return ans;
}
int main()
{
    int size;
    int target;
    std::cout << "Enter n : ";
    std::cin >> size;
    vector<int> input;
    for (int i = 0; i < size; i++)
    {
        int ele;
        std::cin >> ele;
        input.push_back(ele);
    }
    std::cout << "Enter target: ";
    std::cin >> target;
    vector<int> result = res(input, target);
    std::cout << "[";
    for (auto i : result)
    {
        std::cout << i << ",";
    }
    std::cout << "]";
    return 0;
}