#include <iostream>
using namespace std;
void decon();
int main()
{
    decon();
    return 0;

}
void decon()
{
    int x,y = 10,var;
    if (y<10)
    {
        var = 30;
    }
    else
    {
        var = 40;
    }
    // 
    cout << "valued  of var : " << var << endl;
    // 
    x = (y<10) ? 30 : 40;
    cout << "value of x : " << x << endl;
}