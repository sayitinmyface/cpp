#include <iostream>
using namespace std;
// 
void loopFor();
// 
int main()
{
    loopFor();
    return 0;
}
// 
void loopFor()
{
    for (int first = 10; first < 20; first++)
    {
        cout << "value of first : " << first << endl;
        if (first>16)
        {
            break;
        }
    }
    
}