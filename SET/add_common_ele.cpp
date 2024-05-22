#include <iostream>
#include <set>
#include <vector>
using namespace std;
int sum(vector<int> v1, vector<int> v2)
{
    set<int> set1;
    int i = v1.size()-1,ans=0;
    while (!v1.empty())
    {
        set1.insert(v1[i]);
        i--;
        v1.pop_back();
    }
    //  for ( auto itr = set1.begin(); itr != set1.end(); itr++)
    // {
    //     std::cout << *itr << " ";
    // }
    // std::cout<<endl;
    for(auto ele:v2)
    {
        if(set1.find(ele)!=set1.end())
        {
            ans+=ele;
        }
    }
    return ans;
}
int main()
{
    vector<int> v1;
    vector<int> v2;
    int m,n;
    std::cout<<"Enter size of v1 v2: \n";
   std:: cin>>n>>m;

    std::cout<<"Enter element of v1 : \n";
   while(n--)
   {
    int ele;
    std::cin>>ele;
    v1.push_back(ele);
   }
    std::cout<<"Enter element of v2 : \n";
   while(m--)
   {
    int ele;
    std::cin>>ele;
    v2.push_back(ele);
   } 
   std::cout<<endl;
   std::cout<<"sum is: "<<sum(v1,v2)<<endl;

    return 0;
}