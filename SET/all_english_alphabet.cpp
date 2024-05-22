#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
bool ckh_all_alphabet(string str)
{
    // for (int j = 0; j < str.length(); j++)
    // {
    //     if (str[j] > 65 && str[j] < 90)
    //     {
    //         str[j] = str[j] + 32;
    //     }
    // }
    //  to convert all character of string to lower case we use transform function
    transform(str.begin(),str.end(),str.begin(),::tolower);
    if (str.length() < 26)
    {
        return false;
    }
    int i = str.length() - 1;
    set<char> set1;
    while (!str.empty())
    {
        set1.insert(str[i]);
        i--;
        str.pop_back();
    }
    // std::cout << set1.size() << endl;
    if (set1.size() == 26)
    {
        return true;
    }
    return false;
}
int main()
{
    string str;
    std::cout << "Enter the string: \n";
    std::cin >> str;
    if (ckh_all_alphabet(str))
    {
        std::cout << "All alphabet present in string";
    }
    else
    {
        std::cout << "Not all alphabet  present in string";
    }

    return 0;
}