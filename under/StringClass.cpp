#include <iostream>
using namespace std;
void stringClass()
{
    string str1 = "hello" , str2 = "world" , str3;
    int len;
    int i = 3;
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    str3 = str1 + str2;
    cout << "str1+str2 : " << str3 << endl;
    len = str3.size();
    cout << "str3.size() :" << len << endl;

}