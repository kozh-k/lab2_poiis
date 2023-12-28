#pragma once
#include <vector>
#include <string>
#include "Book.h"
using namespace std;

class Customer {
private:
    string name;
public:
    vector<Book> books;
    Customer(string name);
    ~Customer();
};