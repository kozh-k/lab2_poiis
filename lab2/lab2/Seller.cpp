#include "Seller.h"
using namespace std;

Seller::Seller(string name, string position) : Worker(name, position) {}
Seller::Seller()
{

}
;
Seller::~Seller() {};
void Seller::sell(Customer& customer, Order& order, BookShelf& shelf) {
	shelf.books.pop_back();
	delete &order;
};