#include <iostream>
using namespace std;
void funcChar();
int main()
{
    funcChar();
    return 0;
}

void funcChar()
{
    char ch;
    cin >> ch;
    if (ch=='N')
    {
        cout << "Press -" << ch << "- Character" << endl;
    }

    cin >> ch;
    cout << int(ch) << "Press-" << ch << "-Character" << endl;
    cin >> ch;
    cout << int(ch) << "Press-" << ch << "-Character" << endl;
}