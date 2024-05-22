#include<iostream>
using namespace std;
class fruit 
{
    public: 
    string name;
    string color;
    int quantity;
};
int main()
{ fruit mango;
mango.color="yellow";
mango.name="Mango";
mango.quantity=2;
cout<<mango.name<<endl;
cout<<mango.color<<endl;
cout<<mango.quantity<<endl;

return 0;
}