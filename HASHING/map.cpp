/* map is a STL container which stores key-value pairs
ex:  name-> phone no.(key->value pair)
 The elements are stored in ascending/decending order. by default it store value in ascending order for decending order map<data-type key,data type value,greater <datatype key>>
 maps can't have duplicate keys.
 maps Implement by using BST
 map<datatype1,datatype2>map_name={{key1,value1},{key2,value2},{key3,value3}}
*/
/* MEMBER FUNCTION OF MAP
1.erase(): O(logn) for first two case but O(N) is for 3rd case where N is no. of ele in range to be deleted
(i) map.erase(iterator)-> iterator pointing to the value get deleted // iterator are used to traverse the STL container
(ii) map.erase(key) -> key value pair corresponding to that key get
deleted
(iii) map.erase( start_itr,end_itr)-> delete a range including ele at start_itr but excluding element at end_itr
2.swap():
 if two map of same key type and value typr then they can be swap using this function
 swap(m1,m2); or m1.swapm2;

3.clear():
m.clear()-> clear all content of map
4. empty(): chk wheather map is empty or not return 1 if empty
5. size(): no of element present in my map
6.max_size(): memory ne kitna space de rakha hai map ko
according to internal implementation jese hi map ka size ek particular limit cross karta hai turant max size badh jata hai ye internal implementation hota hai
7.find(): returns itr to element if present else it returns map.end() ptr
8.count(): no, of occurences of key return 1 if present else 0
9.upper_bound(): return itr to next greater element
9.lower_bound(): return itr to element if present else itr to next greater element
10. begin() and end(): returns itr to begin and position after the end element
11. rbegin() and rend(): returns itr to begin and end position after the end element in reverse order


*/
#include <iostream>
#include <map>
using namespace std;
int main()
{
    /* map<key data type,value data type>map name */
    map<string, long int> contacts;
    map<string, long int, greater<string>> decending_contacts;
    //  insertion time complexity is O(logn)
    contacts.insert(make_pair("Garvit", 9520003000));
    //  another and preffered for insertion
    contacts["Abhinav" /* key*/] = 98970096 /* value*/;
    // contacts ["Abhinav"/* key*/]=98970296/* value*/; // if we add value to the same key again then value get updated
    //  printing the element
    for (auto ele : contacts) /* ele is of type key-value pair*/
    {
        std::cout << ele.first << ":";   /* ele.first is key*/
        std::cout << ele.second << "\n"; /* ele.second is value*/
    }
    std::cout << endl;
    map<string,long  int>::iterator itr;
    for (itr = contacts.begin(); itr != contacts.end(); itr++)
    {
        std::cout << itr->first <<":"<<itr-> second<<endl;
    }
    std::cout << endl;
    map<string,long  int>::reverse_iterator itr_1;
    //  element print in reverse order
    for (itr_1 = contacts.rbegin(); itr_1 !=contacts.rend(); itr_1++)
    {
        std::cout << itr_1->first <<":"<<itr_1-> second<<endl;
    }
    std::cout << endl;
    

    return 0;
}
