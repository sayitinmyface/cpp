#include "under/RandomNumbers.cpp"
#include <cstring>
//  
// extern void printBook(struct Book);
extern void randomNumbers();
// extern void stringClass();
// 
int main()
{
    char grade = 'a';
    switch (grade)
    {   
        case 'b':
        case 'c':
            cout << "wwwww" << endl;
            break;
        
        default:
            cout << "end" << endl;
            // break;
    }


    // randomNumbers();
    // struct Book Book;
    // Book.subject = "c++ programming";
    // strcpy(Book.author,"chand miyan");
    // printBook(&Book);
    // return 0;
 
    
    
    // struct Books BestSell;
    // BestSell.category = categories::COMPUTERS;
    // strcpy(BestSell.BookList[1].title,"tell me now");
    // strcpy(BestSell.BookList[1].author,"yohan");
    // BestSell.print_booklist();

    // struct Book Book1;
    // strcpy(Book1.title,"learn c++ programming");
    // Book1.subject = "c++ programming";
    // strcpy(Book1.author,"monchiman");
    // Book1.book_id = 1234;
    // cout << "title :" << Book1.title << endl;
    // cout << "subject :" << Book1.subject << endl;
    // cout << "author :" << Book1.author << endl;
    // cout << "book_id :" << Book1.book_id << endl;
    return 0;
}