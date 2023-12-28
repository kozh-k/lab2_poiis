#include "Book.h"
#include <string>
using namespace std;

Book::Book(string title, string author) {
    this->title = title;
    this->author = author;
}

Book::Book()
{
    this->title = "";
    this->author = "";
}

Book::~Book() {} 