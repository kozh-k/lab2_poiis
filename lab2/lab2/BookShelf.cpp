#include "BookShelf.h"
using namespace std;

BookShelf::BookShelf(int number) {
	this->number = number;
	this->isClean = false;
};
BookShelf::~BookShelf() 
{
	int number = 0;
};
int BookShelf::countBooks() {
	return this->books.size();
};
void BookShelf::setBook(Book& book) {
	this->books.push_back(book);
};