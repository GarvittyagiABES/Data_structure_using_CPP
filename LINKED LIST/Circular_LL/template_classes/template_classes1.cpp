#include<bits/stdc++.h>
#include<list>
using namespace std;
// template classes allow us to pass data type as parameter
// STL have basically 3 component 
 /*1.containers
2.Iterators
3.algorithm
containers:used to hold data of same type
iterators:used to traverse the container these are generally pointer like itentities
algorithm: function that are used to manipulate data in the container.
ex. sort(),min(),max().to kmow more visit
https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
*/
// syntax for iterator
// vector<int>(data type)::iterator itr; 

vector<int>v={1,2,3,4,5};
vector<int>::iterator itr;



template<typename T>
class node{  //template class
    public:
    node*next;
    T value;
    node(T data)
    {
        value=data;
        next=NULL;
    }
};
int main()
{
 node<int>*node_1=new node<int> (5);
 std::cout<<node_1->value<<endl;


 node<char>*node_2=new node<char> ('G');
 std::cout<<node_2->value<<endl;


 node<string>*node_3=new node<string> ("Garvit");
 std::cout<<node_3->value<<endl;
 list<int>ll;

return 0;
}