#include <iostream>
using namespace std;
//  protected is accessible in own class ,parent class & child class.
//  public is accessible in whole program.
//  private is accessible only in own class.
class parent
{
public:
    int x;

private:
    int z;

protected:
    int y;
};
class child1: public parent{
    // x will be public.
    // y will be protected.
    // z will  not accessible.
};
class child2: private parent{
    // x will be private.
    // y will be private.
    // z will  not accessible.
};
class child3: protected parent{
    // x will be protected.
    // y will be protected.
    // z will  not accessible.
};
//  function overloading when function of same name called according to no. of argument passes.
//  operator overloading 
int main()
{
    return 0;
}
