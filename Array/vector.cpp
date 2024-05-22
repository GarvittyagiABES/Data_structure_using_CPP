#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(0);
    // v.push_back(1);
    // cout << "size is: " << v.size() << endl;
    // cout << "Capacity is: " << v.capacity() << endl;

    // v.resize(2);
    // v.push_back(2);
    // cout << "size is: " << v.size() << endl;
    // // cout << "Capacity is: " << v.capacity() << endl;

    // v.resize(3);
    // v.push_back(4);
    // cout << "size is: " << v.size() << endl;
    // // cout << "Capacity is: " << v.capacity() << endl;

    // v.resize(4);
    // v.push_back(5);
    // cout << "size is: " << v.size() << endl;
    // // cout << "Capacity is: " << v.capacity() << endl;
    
    // v.insert(v.begin()+2,3);
    
    //   cout<<"size is: "<<v.size()<<endl;
    // //   cout<<"Capacity is: "<<v.capacity()<<endl;
    //  v.pop_back();
      
    //   cout<<"size is: "<<v.size()<<endl;
    // //   cout<<"Capacity is: "<<v.capacity()<<endl;
    // v.erase(v.end()-1);
    //    cout<<"size is: "<<v.size()<<endl;
    //    v.clear();
          cout<<"size is: "<<v.size()<<endl;
          for( int i=1;i<=10;i++)
          {
            int element;
            cout<<"Enter the" <<i<<"element you want to insert in vector:";
            cin>>element;
            v.push_back(element);
          }
          cout<<"size is: "<<v.size()<<endl;
          v.erase(v.end()-2);
          for(int i=0;i<v.size();i++)
          {
            cout<<i<<"th element of vector is : "<<v[i]<<endl;
          }



      
      

    return 0;
}