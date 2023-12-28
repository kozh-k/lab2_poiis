#include "WareHouse.h"
#include <iostream>
#include <string>
using namespace std;

WareHouse::WareHouse() {
    
    vector<BookShelf> shelves;
    Seller seller;
    Cleaner cleaner;
    customers = 0;
    workers = 0;
}
WareHouse::~WareHouse() {}

void WareHouse::setShelves(BookShelf sh1, BookShelf sh2, BookShelf sh3) {
    this->shelves.push_back(sh1);
    this->shelves.push_back(sh2);
    this->shelves.push_back(sh3);
};
int WareHouse::getShelvesSize() {
    return this->shelves.size();
};
void WareHouse::setSeller(Seller& seller) {
    this->seller = seller;
};
void WareHouse::setCleaner(Cleaner& cleaner) {
    this->cleaner = cleaner;
};