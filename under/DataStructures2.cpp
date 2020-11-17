#include <iostream>
using namespace std;
// 
struct Book
{
    string subject;
    char author[50];
};
// 
void printBook(struct Book *book)
{
    cout << "printbook subject : " << book -> subject << endl;
    book -> subject = "change subject in function";
}

