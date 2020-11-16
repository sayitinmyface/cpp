#include <iostream>
using namespace std;
void referenceVar()
{
    int first = 4;
    int &ref_first = first;
    cout << "value of first : " << first << ", address :" << &first << endl;
    cout << "value of first reference : " << ref_first << ", address :" << &ref_first << endl;
    ref_first = 6;
    cout << "value of first : " << first << ", address :" << &first << endl;
    cout << "value of first reference : " << ref_first << ", address :" << &ref_first << endl;
    cout << "value of first reference size : " << sizeof(&ref_first)<< endl;
    double second = 11.7;
    double &ref_second = second;
    cout << "value of second :" << second << endl;
    cout << "value of second reference:" << ref_second << endl;
    cout << "value of second reference size:" << sizeof(&ref_second) << endl;
}