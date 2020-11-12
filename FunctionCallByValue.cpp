#include <iostream>
#include "under/FunctionSum.cpp"
// 
using namespace std;
// 
extern int sum(int,int);
// int sum(int,int);
int main()
{
    int first,second,third,result;
        // 
    cout << "first num : " << "\t";
    cin >> first;
    cout << "second num : " << "\t";
    cin >> second;
    cout << "third num : " << "\t";
    cin >> third;
    // 
    result =  sum(first,second);
    // 
    cout << "first + second is : " << result << endl;
    cout << "second + third is : " << sum(second,third) << endl;
    // 
    return 0;
}

// int sum(int first,int second)
// {
//     int result;
//     result = first+second;
//     return result;
// }