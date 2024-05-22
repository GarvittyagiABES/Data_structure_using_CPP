/*
1.it can store duplicate values
2. store in ascending or decending order
3. value will be itendified by itself and it can't be modified
*/
/* MEMBER FUNCTION OF MULTISET
1. insert(): O(logN)
2. deletion 
erase(value) :O(logN)
erase(position)
erase(start_pos,end_pos):O(N)
if we pass a value it will delete all with same value if we want to delete only one value then we have to pass position.
3. find(): lowerbound of element searched if found else end iterator O(logN)
4.count(): return no of occurences O(logN+K) here k is no of occurences
5. lower_bound():returns iterator pointing to the value if present else position of next greater value 
6. upper_bound(): position of next greater value

*/
#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    multiset<int>mset;
    multiset<int,greater<int>>mset2; // value store in decending order because we use greater<int>
    mset.insert(1);
    mset.insert(3);
    mset.insert(2);
    mset.insert(3);
    mset.insert(4);
    for(auto i: mset)
    {
        std::cout<<i<<" ";
    }
    std::cout<<endl;
    mset2.insert(1);
    mset2.insert(3);
    mset2.insert(2);
    mset2.insert(3);
    mset2.insert(4);
    for(auto i: mset2)
    {
        std::cout<<i<<" ";
    }
    std::cout<<endl;

return 0;
}