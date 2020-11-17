#include <iostream>
using namespace std;
void pointerArray()
{
    int var[3] = {10,100,200},*ptr_first = var;
    for (int i = 0; i < 3; i++)
    {
        // cout << "array var[" << i << "] = "  << var[i] << " address : " << &var[i] << endl;
        cout << "array var[" << i << "] = "  << *var << " address : "  <<  endl;
        cout << "pointer var[" << i << "] = "  << *ptr_first << " address : " << ptr_first++ << endl;
        // ptr_first++;
    }
    int *ptr_second;
    for (int i = 2; i >= 0 ; i--)
    {
        ptr_second = &var[i];
        cout << "value of *ptr_second : " << *ptr_second << " , address : " << ptr_second << endl;
    }
}