/* HASHING FUNCTIOB
1.Division method
h(k)=key %(mod) m; where m is table size
2. Mid square method
    h(k)=key^2 and extract middle digit
3. Digit folding method
in this fold key into equal size part and add them
k=k1k2k3k4 ex:k=12345
h(k)=k1+k2+k3+k4; h(k)=12+34+5=51
4. multiplication method
     h(k)=floor(M(kAmod 1)) between 0 to 1
     where M is table size A is a integer
when two element has same hash value then collision occur
Load factor= no of ele/no. of bucket;
 avg entries in one bucket
as limit cross we do rehashing(increase size of hash table and re enter using hash function)
*/
/* Now we implement hashing using seperate chaining collision resolution technique*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
class Hashing
{   
    vector<list<int>> hashtable;
    int size=0;
    public:
    Hashing(int new_size)
    {
        size = new_size;
        hashtable.resize(size);
    }
    int hashvalue(int key)
    {
        return key % size;
    }
    void add(int key)
    {
        int idx = hashvalue(key);
        hashtable[idx].push_back(key);
    }
    list<int>::iterator search(int key)
    {
        int idx = hashvalue(key);
        return find(hashtable[idx].begin(), hashtable[idx].end(), key);
    }
    void delete_key(int key)
    {
        int idx = hashvalue(key);
        if (search(key) != hashtable[idx].end())
        {
            hashtable[idx].erase(search(key));
            std::cout << key << " is deleted \n" << endl;
        }
        else
        {
            std::cout<<key << "  is not present in the hash table ";
        }
    }
};
int main()
{
    Hashing h(10);
    h.add(5);
    h.add(9);
    h.add(3 );
    h.delete_key(3);
    h.delete_key(3);

    return 0;
}