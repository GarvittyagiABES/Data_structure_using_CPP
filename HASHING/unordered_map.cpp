/* It store key value pair in unordered manner
 insertion deletion retrival(search) is of O(1);
 this is implemented using hashing

*/
/*  MEMBER FUNCTION
1.insert(),2.erase(),3.find()-> complexity in avg case is O(1) but in worst case complexity is O(n) where n is size of map;
we use erase function in 3 way erase(itr/key/start_itr,end_itr);
4.find()-> return itr to element if present else give itr to um.end();
5.count()-> return 1 if key is present else return 0;
6. begin()-> return a itr to first element 
6. end()-> return a itr to after last element 
6. rbegin()-> return a itr to first element  in reverse order
6. rend()-> return a itr to after last element in reverse order i.e. before first element  


*/
#include<iostream>
#include<unordered_map>
using namespace std;
int main()
{   //decleration 
    unordered_map<int,string> record; // roll no,name
    // insertion
    /*(i)*/ record.insert(make_pair(56,"Devansh"));
    /*(ii)*/ record[06]="aditya";
    record[05]="Shyam";
    record[36]="Anshul";
    record[25]="Gopi";
    record[56]="Kunal"; // if we give again a value to name key it get updated
    record.insert(make_pair(06,"Shreya"));  // if I give value to the same key using insert function then nothing will happen 
    for(auto pair:record)
    {
        std::cout<<pair.first<<":";
        std::cout<<pair.second<<"\n"; 
    }
    std::cout<<endl;

return 0;
}