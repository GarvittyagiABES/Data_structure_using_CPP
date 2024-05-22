/*
1. Set is an STL container used to store unique values.
2. It stores values in ordered state wheather in increasing or decreasing order.
3. Their is no indexing element are identified by their own value.
4. Once value is inserted it can't be modified.
*/
/* DISADVANTAGES
1. can't access elements using indexing
2. more memory than array
3. not suitable for large data sets because because insertion and deletion if of O(logn)
*/
/*
DECLERATION
#include<set>
 set<data-type>set_name;
// by default values are stored in increasing order if want decreasing
set<datatype,greater<datatype>>set_name;
for add a value use set_name.insert(value);
this function returns an iterator to the inserted value.
for deleting a value use set_name.erase(value);
 also for deleting a value use set_name.erase(position);
 also for deleting a value use set_name.erase(start_pos,end_pos);  complexity is O(n) where n is the no. of element in the range
 it  will delete start position including it till end position excluding end position
*/
/*
TRAVERSING
set_name.begin()- iterator pointing to first element of set
set_name.end()- iterator pointing position after to last element of set
*/
/*  MEMBER FUNCTION
1.size()
2. max_size()- maximum no of element set can hold
3. empty()- return true if empty
4. clear()- removes all element from set
5. find()-it returns position of element if present else returns end iterator.
6. count()- return 1 if element is present else  return 0 because if a element is present in our set it may at only 1 time 
7. lower_bound()- returns the element if present else returns just greater element 
8. upper_bound()-  always returns the next greater value
9. begin()-returns iterator to first element of set
10. end()-returns iterator to position after last  element of set
11. rbegin()-returns iterator to first element of set from last 
12. rend()-returns iterator to position after last  element of set in reverse order


*/
#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> set_1;
    //  insertion in a set
    set_1.insert(3);
    set_1.insert(2);
    set_1.insert(1);
    set_1.insert(4);
    set_1.insert(5);
    std::cout << set_1.size() << endl;
    set_1.insert(3);
    std::cout << set_1.size() << endl;
    //  size remain same because duplicate value is added but set contains only unique value
    //  Traversing a set
    set<int>::iterator itr;
    for (itr = set_1.begin(); itr != set_1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << endl;
    for (auto i : set_1)
    {
        std::cout << i << " ";
    }
    std::cout << endl;
    //  deleting using element value
    set_1.erase(4);
    //  to print
    for (itr = set_1.begin(); itr != set_1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << endl;
    //  delete using iterator
    set_1.insert(4); // first insert 4
    itr = set_1.begin();
    advance(itr, 3);
    set_1.erase(itr);
    for (itr = set_1.begin(); itr != set_1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << endl;
    //  deleting a range
    set_1.insert(6);
    set_1.insert(7);
    set_1.insert(8);
    set_1.insert(9);
    set_1.insert(10);
    itr = set_1.begin();
    auto itr_2 = set_1.begin();
    advance(itr, 2);   // pointing to 3
    advance(itr_2, 7); // pointing to 9
    set_1.erase(itr, itr_2);
    for (itr = set_1.begin(); itr != set_1.end(); itr++)
    {
        std::cout << *itr << " ";
    }
    std::cout << endl;
    if (set_1.find(8) != set_1.end())
    {
        std::cout << "element founded" << endl;
    }
    else
    {

        std::cout << "element not  founded" << endl;
    }

    return 0;
}