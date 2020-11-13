#include <iostream>
using namespace std;

void funcChar()
{
    char ch;
    cin >> ch;
    if (ch=='N')
    {
        cout << int(ch) << "Press -" << ch << "- Character" << endl;
    }

    cin >> ch;
    cout << int(ch) << "Press-" << ch << "-Character" << endl;
    cin >> ch;
    cout << int(ch) << "Press-" << ch << "-Character" << endl;
}