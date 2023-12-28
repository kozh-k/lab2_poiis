#pragma once
#include <string>
#include "BookShelf.h"
#include "Worker.h"
using namespace std;

class Cleaner : public Worker {
private:
    string name;
public:
    Cleaner(string name, string position);
    Cleaner();
    ~Cleaner();
    void clean(BookShelf& shelf);
};