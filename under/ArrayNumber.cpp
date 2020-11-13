#include <iostream>
using namespace std;
void arrayNumber()
{
    int array_number[10];
    auto count = 0;
    // 
    for (int i = 0; i < 10; i++)
    {
        count += 5;
        array_number[i] = i+count;
    }
    // 
    // cout << " element " <<
    for (int i = 0; i < 10; i++)
    {
        cout << i << array_number[i] << endl;
    }
}