#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;
int second_smallest(vector<int> v)
{
    set<int> ms;
    int i = v.size() - 1;
    while (!v.empty())
    {
        ms.insert(v[i]);
        v.pop_back();
        i--;
    }
    set<int> ::iterator itr;
    itr=ms.begin();
    advance(itr,1);
    return *itr;

}
int main()
{  int n;
    std::cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        std::cin>>v[i];
    }
   std:: cout<<"second smallest is: "<<second_smallest(v);

    return 0;
}