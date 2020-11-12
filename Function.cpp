#include <iostream>
#include "under/FunctionOther.cpp"
using namespace std;
extern int funcOutside(); //
int i = 5;
int main(){
    int i = funcOutside();
    cout << "return value :" << i << endl;
    cout << "Scope resolution operator : " << ::i << endl;// [영역]::[func or 변수] = 내 영역 밖에 있는 것을 가져온다.
    return 0;
}   
            