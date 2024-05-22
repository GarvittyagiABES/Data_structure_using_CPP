/* an stl container
store key-value pair
element store in order either in ascending or decending by default it is ascending
duplicate keys are allowed
implemented using BST 
insert delete and search are of O(logn)
 */
/*  MEMBER FUNCTION
1.insert(),2.erase(),3.find()-> complexity is O(logn)
we use erase function in 3 way erase(itr/key/start_itr,end_itr);
when deleting a range complexity become O(n) where n is range of element
4.find()-> return itr to element if present else give itr to multi_map.end();
5.count()-> return no. of count if key is present else return 0;
6. begin()-> return a itr to first element 
6. end()-> return a itr to after last element 
6. rbegin()-> return a itr to first element  in reverse order
6. rend()-> return a itr to after last element in reverse order i.e. before first element 
7. equal_range (key )-> returns bound of range of element with key passed 


*/
#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<string,long int > directory;
    directory.insert(make_pair("Garvit",444948));
    directory.insert(make_pair("kartik",85456));
    directory.insert(make_pair("Abhinav",86594));
    directory.insert(make_pair("kartik",587485));// duplicate value can be inserted 
    // directory["RAM"]=0236985;// insertion by this method not allowed  in multi map
    for(auto pair: directory)
    {
        std::cout<<pair.first<<":";
        std::cout<<pair.second<<"\n";

    }
    std::cout<<endl;
    std::cout<<directory.count("kartik")<<endl;



return 0;
}