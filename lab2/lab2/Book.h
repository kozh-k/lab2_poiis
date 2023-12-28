#pragma once
#include <string>
using namespace std;

class Book {
private:
    string title;
    string author;
public:
    Book(string title, string author);
    Book();
    ~Book();
};