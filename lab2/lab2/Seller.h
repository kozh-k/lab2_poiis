#pragma once
#include <iostream>
#include <string>
#include "Book.h"
#include "Customer.h"
#include "Worker.h"
#include "Order.h"
#include "BookShelf.h"
using namespace std;

class Seller : public Worker {
private:

public:
    Seller(string name, string position);
    Seller();
    ~Seller();
    void sell(Customer& customer, Order& order, BookShelf& shelf);
};