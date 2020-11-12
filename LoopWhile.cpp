#include <iostream>
using namespace std;
//
void loopWhile();
//
int main()
{
    loopWhile();
    return 0;
}
//
void loopWhile()
{
    int first = 10;
    while (first < 20)
    {
        cout << "values of first : " << first << endl;
        first++;
    }
}