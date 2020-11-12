#include <iostream>
#include "under/FunctionOther.cpp"
using namespace std;
extern int funcOutside();
int i = 5;

// int funcInside();
int funcInside(){
    cout << "int funcInside()"<< endl;
    return 8;
}
// int main(){
//     int num = funcInside();
//     cout << "return value :" << num << endl;
//     return 0;
// }
int main(){
    int i = funcOutside();
    cout << "return value :" << i << endl;
    cout << "Scope resolution operator : " << ::i << endl;
    return 0;
}