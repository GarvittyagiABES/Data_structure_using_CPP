/* STL container ,stores key value pair.
element are not in order.
duplicate key are allowed.
implemented using hashing.
insert,delete,searching complexity are of O(log n): in avg case and O(n) in worst where n is size of unordered_map
 */
/*  MEMBER FUNCTION
1.insert(),2.erase(),3.find()-> complexity is O(1)
we use erase function in 3 way erase(itr/key/start_itr,end_itr);
when deleting a range complexity become O(n) where n is range of element
4.find()-> return itr to element if present else give itr to multi_map.end();
5.count()-> return no. of count if key is present else return 0;
6. begin()-> return a itr to first element 
6. end()-> return a itr to after last element 
6. rbegin()-> return a itr to first element  in reverse order
6. rend()-> return a itr to after last element in reverse order i.e. before first element  


*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_multimap<string,int>fruit_count;
    fruit_count.insert(make_pair("Apple",6));
    fruit_count.insert(make_pair("Banana",12));
    fruit_count.insert(make_pair("Mango ",20));
    fruit_count.insert(make_pair("Apple",10));
    for(auto pair: fruit_count)
    {
        std::cout<<pair.first<<": ";
        std::cout<<pair.second<<"\n";
    }

return 0;
}