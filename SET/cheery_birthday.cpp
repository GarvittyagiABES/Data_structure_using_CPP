#include<iostream>
#include<set>
using namespace std;
int main()
{ 
    set<string> invite_list;
    int n;
    std::cout<<"Enter n: \n";
    std::cin>>n;
    std::cout<<"Enter the name :\n";
    while(n--)
    {   
        string str;
        std::cin>>str;
        invite_list.insert(str);
    }
    std::cout<<"Final name: \n";
    for(auto i:invite_list)
    {
        std::cout<<i<<"  ";
    }


return 0;
}