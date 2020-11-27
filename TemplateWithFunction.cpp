#include <iostream>
using namespace std;

template <typename T>

const T Max(const T first,const T second)
{
    return first<second? second:first;
};

int main(){
    int int_first = 29,int_second=1;
    cout << Max(int_first,int_second) << endl;
    double d_first = 29.234,d_second=1.23423;
    string s_first = "A",s_second="a"; cout << Max(s_first,s_second) << endl;
    bool b_first = true,b_second=false;
    return 0;
}    