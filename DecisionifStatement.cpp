#include <iostream>
using namespace std;
void ifStatement();
//
int main()
{
    cout << "main" << endl;
    ifStatement();
    return 0;
}

void ifStatement()
{
    int first = 100;
    if (first == 10)
    {
        cout << "value of first is 10" << endl;
    }
    else if (first == 30)
    {
        cout << "value of first is 30 " << endl;
    }
    else
    {
        cout << "value of first is not matching" << endl;
    }
    //
    cout << "exact value of first is :" << first << endl;
    // return 0;
}