#include <iostream>
using namespace std;
// int funcInside();
int funcInside(){
    cout << "int funcInside()"<< endl;
    return 8;
}
int main(){
    int num = funcInside();
    cout << "return value :" << num << endl;
    return 0;
}
