#include "Cleaner.h"

using namespace std;

Cleaner::Cleaner(string name, string position) : Worker(name, position) {}
Cleaner::Cleaner()
{
	string name = "";
}
;
Cleaner::~Cleaner() {};
void Cleaner::clean(BookShelf& shelf) {
	shelf.isClean = true;
};