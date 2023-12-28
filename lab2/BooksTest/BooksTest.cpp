#include "pch.h"
#include "CppUnitTest.h"
#include "CppUnitTest.h"
#include <iostream>
#include "../lab2/Book.h"
#include "../lab2/BookShelf.h"
#include "../lab2/Cleaner.h"
#include "../lab2/Customer.h"
#include "../lab2/Order.h"
#include "../lab2/WareHouse.h"
#include "../lab2/Seller.h"
#include "../lab2/Worker.h"
#include "../lab2/UnusableBook.h"
#include "../lab2/TrashCan.h"

#include "../lab2/Book.cpp"
#include "../lab2/BookShelf.cpp"
#include "../lab2/Cleaner.cpp"
#include "../lab2/Customer.cpp"
#include "../lab2/Order.cpp"
#include "../lab2/WareHouse.cpp"
#include "../lab2/Seller.cpp"
#include "../lab2/Worker.cpp"
#include "../lab2/UnusableBook.cpp"
#include "../lab2/TrashCan.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace YourProjectTests
{
    TEST_CLASS(BookTests)
    {
    public:

        TEST_METHOD(TestBookShelfCountBooks)
        {
            Book book1("Title1", "Author1");
            Book book2("Title2", "Author2");

            BookShelf bookShelf(1);
            bookShelf.setBook(book1);
            bookShelf.setBook(book2);

            Assert::AreEqual(2, bookShelf.countBooks());
        }
    };

    TEST_CLASS(WareHouseTests)
    {
    public:

        TEST_METHOD(TestWareHouseSetShelves)
        {
            WareHouse warehouse;
            BookShelf sh1(1), sh2(2), sh3(3);
            Seller seller("name", "position");
            Cleaner cleaner("name", "position");
            warehouse.setShelves(sh1, sh2, sh3);
            warehouse.setCleaner(cleaner);
            warehouse.setSeller(seller);

            Assert::AreEqual(3, warehouse.getShelvesSize());
            Assert::IsTrue(true);
        }

    };
    TEST_CLASS(SellTests)
    {
    public:

        TEST_METHOD(TestWareHouseSetShelves)
        {
            Customer cust("name");
            Order order;
            BookShelf sh(1);
            Seller seller("name", "position");
            seller.sell(cust, order, sh);
            Assert::IsTrue(true);
        }

    };
}