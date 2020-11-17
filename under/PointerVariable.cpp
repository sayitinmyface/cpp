#include <iostream>
using namespace std;
void pointerVariable()
{
    int var = 3;
    int *ptr_first;
    ptr_first = &var;
    // 
    cout << "var variable : " << var << ", address : " << &var << endl;
    cout << "ptr_first variable : " << ptr_first << ", address : " << &ptr_first << endl;
    cout << "value of *ptr_first variable : " << *ptr_first << ", address : " << &(*ptr_first) << endl;
}