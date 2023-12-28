#include "Worker.h"
using namespace std;

Worker::Worker(string name, string position) {
	this->name = name;
	this->position = position;
};
Worker::Worker() {};
Worker::~Worker() {};
void Worker::toPresent() {
	cout << "Hi, my name is " << this->name << ", my position is " << this->position << endl;
};