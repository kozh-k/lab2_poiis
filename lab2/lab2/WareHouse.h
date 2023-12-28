#pragma once
#include "Book.h"
#include <vector>
#include "Seller.h"
#include "Cleaner.h"

using namespace std;

class WareHouse {
private:
	vector<BookShelf> shelves;
	int customers;
	int workers;
	Seller seller;
	Cleaner cleaner;
public:
	WareHouse();
	~WareHouse();
	void setShelves(BookShelf sh1, BookShelf sh2, BookShelf sh3);
	int getShelvesSize();
	void setSeller(Seller& seller);
	void setCleaner(Cleaner& cleaner);
};