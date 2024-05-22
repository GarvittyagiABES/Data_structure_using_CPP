#include<iostream>
using namespace std;
int main()
{ 
    // wild ptr
int *ptr;//only declared
cout<<ptr<<endl;
cout<<*ptr<<endl;
// Null ptr
int *ptr1=NULL;
cout<<ptr1<<endl;
// cout<<*ptr1<<endl;//if we derefernce the null ptr1 then segmentation error occur and program terminated.
// Dangling pointer : pointing to a address which not exist 
int* ptr2=NULL;
{
  int   x=10;
  ptr2=&x;

}
cout<<ptr2;

// void ptr:these are special ptr that can point to any value wheather int float char double etc;
float f =12.8;
int y=2;
char ch ='a';
void *ptr3=&f;
void *ptr4=&y;
void *ptr5=&ch;
// void ptr can't be de referenced normally it dereferenced by type casting;
cout<<endl<<*(float*)ptr3<<endl;
cout<<*(int *)ptr4<<endl;
cout<<*(char*)ptr5<<endl;
return 0;
}