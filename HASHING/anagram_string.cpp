#include <iostream>
#include <unordered_map>
using namespace std;
bool Is_anagram(string s1, string s2)
{
    unordered_map<char, int> freq;
    for (auto ele : s1)
    {
        freq[ele]++;
    }
    
    for (auto ele : s2)
    {
        if (freq.find(ele) == freq.end())
        {
            return false;
        }
        freq[ele]--;
    }
    for(auto i:freq)
    {
        std::cout<<i.first<<":";
        std::cout<<i.second<<"\n";
    }
    unordered_map<char, int>::iterator itr;
    for (itr = freq.begin(); itr != freq.end(); itr++)
    {
        if (itr->second != 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    string str1, str2;
    std::cin >> str1 >> str2;
    std::cout << (Is_anagram(str1,str2) ? "Yes string is Anagram" : "No string is not a anagram");
    return 0;
}