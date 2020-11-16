#include <iostream>
using namespace std;
void arrayChar()
{
    char greeting[6] = {'h','e','l','l','o','\0'};
    cout << "greeting message : " << greeting << endl;
    char withoutnull[5] = {'w','o','r','l','d'};
    // char withoutnull[6] = {'w','o','r','l','d'};
    cout << "without null : " << withoutnull << endl;    
    short count = 0;
    while (greeting[count]!=NULL)
    {
        cout << "with null [" << count << "] :" << greeting[count] << endl;
        count++;

    }
}