#pragma once
#include <string>
#include "Book.h"

class UnusableBook : public Book {
private:

public:
    UnusableBook(string title, string author);
    ~UnusableBook();
};