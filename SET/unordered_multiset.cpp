/*Allow duplicates value and store them in unordered manner.
values will be identified by itself and can't be modified.
*/
/* MEMBER FUNCTION OF UNORDERED_MULTI SET
1.insert(): (i) single element O(1) in avg case ,O(N) in worst case 
            (ii)  multiple element O(n) in avg case O(n*(N+1)) in worst case 
2. deletion
erase(): O(1) avg, O(N) worst case 
3. find(): O(1)  in avg case  and O(N) in worst case
4. count(): O(n)  in avg case  and O(N) in worst case 
n-> no. of occurences,N is size 
*/
#include <iostream>
#include <algorithm>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_multiset<int> ums;
    ums.insert(4);
    ums.insert(8);
    ums.insert(3);
    ums.insert(1);
    ums.insert(4);
    for (auto i : ums)
    {
        std::cout << i << " ";
    }
    std::cout << endl;

    return 0;
}