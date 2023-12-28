#include "TrashCan.h"

TrashCan::TrashCan() {};
TrashCan::~TrashCan() {};
int TrashCan::getNumberOfDiscardedBooks() {
	return this->discardedBooks.size();
};