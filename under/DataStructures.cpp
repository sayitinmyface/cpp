#include <iostream>
using namespace std;
struct Book
{
    char title[50],author[50];
    string subject;
    int book_id;
};

struct Books
{
    struct Book BookList[5];
    string category;
    void print_booklist()
    {
        for (int i = 0; i < 5; i++)
        {
            cout << i << "," << BookList[i].title << endl;
        }
    }
};
// 
enum categories {COMPUTERS,ARTS,BUSINES};
