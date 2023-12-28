#pragma once
#include <vector>
#include "Book.h"
using namespace std;

class BookShelf {
private:
    int number;
public:
    vector<Book> books;
    bool isClean;
    BookShelf(int number);
    ~BookShelf();
    void setBook(Book& book);
    int countBooks();
};