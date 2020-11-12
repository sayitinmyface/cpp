#include <iostream>
using namespace std;
void input();
void loop(int first, int second);

int main()
{
    input();
    return 0;
}

void input()
{
    int first;
    int second;
    //
    cout << "first num : ";
    cin >> first;
    cout << "second num : ";
    cin >> second;
    loop(first, second);
}

void loop(int first, int second)
{
    for (int i = first; i <= second; i++)
    {
        cout << " loop : " << i << endl;
    }
}