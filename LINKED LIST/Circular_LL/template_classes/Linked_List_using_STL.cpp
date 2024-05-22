/*list is a template class in STL for implementing doubly Linked List*/
#include<list>
#include<bits/stdc++.h>
using namespace std;
int main()
{
// list<data-type>list-name;
list<int>rollno; 
list<int> list_1={1,2,3,4,5};
list<int> list_2={6,7,8,9,10};
/*iterator function 
1.begin() // iterator for the first element
2.end()   // iterator for the position after the last element.
3.rbegin() // iterator for 1st element in reverse iteration
4. rend() // iterator for the position after last element in reverse iteration
5.advance(itr, n) // it move the iterator by n position




*/
list_1.begin(); 
list_1.end(); 
auto itr=list_1.begin();
std::cout<<*itr<<endl;
advance(itr,2);
std::cout<<*itr<<endl;
// using range-based loop
for(auto i:list_1)
{
   std:: cout<<i<<" "; 
}
std::cout<<"done using range based loop"<<endl;
//  using iterator
for(auto itr=list_1.begin(); itr!=list_1.end();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;


// reverse traversal
for(auto itr=list_1.rbegin(); itr!=list_1.rend();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;
itr=list_1.begin();
// inserting element in a list
list_1.insert(itr,10);
// insert value count no. of times 
list_1.insert(itr,2 /* count*/,20 /*value*/);
// printing ll using iterator
for(auto itr=list_1.begin(); itr!=list_1.end();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;
//  insert value from start itr to end itr excluding end itr
auto r=list_1.begin();
advance(r,3);
list_1.insert(itr,list_1.begin(),r);
for(auto itr=list_1.begin(); itr!=list_1.end();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;
itr=list_1.begin();
// delete element pointed by iterator
list_1.erase(itr);
for(auto itr=list_1.begin(); itr!=list_1.end();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;
// delete a section of a list from start to end iterator excluding end iterator
itr=list_1.begin();
r=list_1.begin();
advance(r,2);
list_1.erase(itr,r);
for(auto itr=list_1.begin(); itr!=list_1.end();itr++)
{
    std::cout<<*itr<<" ";
}
std::cout<<endl;
//  push  and pop the value in front and back of a list
list_1.push_front(11);
list_1.pop_front();
list_1.push_back(11);
list_1.pop_back();




return 0;
}