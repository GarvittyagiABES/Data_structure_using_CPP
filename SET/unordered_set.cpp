//  same as set only the data stored is in unordered fashion.
//  the average time complexity of insertion,deletion,search is of O(1) due to hashing 
/* Member function of unordered_set
1.insert(): (i) single element
->O(1)-in avg case,O(N)-in worst case
            (ii) mutiple element
->O(n)- in avg case n is no. of element inserted,O(n*(N+1)) where N- size of unordered set
2. erase()- erase(value), erase(iterator, erase(start_itr,end_itr))- complexity is same as insert single and multiple
3.find()- O(1) : avg case ,O(N) in worst case
4.count()- O(1) avg case ,O(N ) in worst case 
5. load_factor(): size of unordered set/ bucket_count
6. rehash(x):set the no. of bucket to x or more O(N) avg case O(N^2) in worst case 

*/
#include<iostream>
#include<algorithm>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_set<int> us1;
    us1.insert(5);
    us1.insert(10);
    us1.insert(2);
    us1.insert(25);
    us1.insert(2);
    for( auto i:us1)
    {
        std::cout<<i<<" ";
    }

return 0;
}