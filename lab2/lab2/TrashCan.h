#pragma once
#include <vector>
#include "Book.h"
#include "UnusableBook.h"

class TrashCan {
private:
    vector<UnusableBook> discardedBooks;
public:
    TrashCan();
    ~TrashCan();
    int getNumberOfDiscardedBooks();
};