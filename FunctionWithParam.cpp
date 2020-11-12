#include <iostream>
using namespace std;
int max(int, int);
int main()
{
    int first_num, second_num, result;
    // 
    cout << "first num : " << "\t";
    cin >> first_num;
    cout << "second_num : "<< "\t";
    cin >> second_num;
    // 
    result = max(first_num, second_num);
    // 
    cout << "return max value is  : "<< "\t" << result << endl;
    cout << "call only function : " << "\t" << max(second_num, first_num) << endl;
    // 
    return 0;
}

int max(int first_num, int second_num)
{
    int result;
    if (first_num > second_num)
    {
        result = first_num;
    }
    else
    {
        result = second_num;
    }
    // 
    return result;
}