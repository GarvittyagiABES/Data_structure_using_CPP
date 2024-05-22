#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
bool equal_string(vector<string> vec)
{
    unordered_map<char, int> m;
    for (auto str : vec)
    {
        for (auto c : str)
        {
            m[c]++;
        }
    }
    int n = vec.size();
    for (auto itr : m)
    {
        if (itr.second % n != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int n;
    std::cin >> n;
    vector<string> vec;
    for (int i = 0; i < n; i++)
    {
        string str;
        std::cin >> str;
        vec.push_back(str);
    }

   std::cout<<((equal_string(vec))?"Yes":"No");

    return 0;
}