#include<iostream>
using namespace std;

int main()
{
    typedef struct Book
    {
        int bookId;
        string title;
        int price;
    } BOOK;

    BOOK b1;
    b1.bookId = 2;
    b1.title = "Let's C";
    b1.price = 2100;

    cout << " Book ID: " << b1.bookId << " Title: " << b1.title <<  " Price: " << b1.price << "\n";

    return 0;
}
