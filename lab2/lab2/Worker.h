#pragma once
#include <iostream>
#include <string>
using namespace std;

class Worker {
private:
    string name;
    string position;
public:
    Worker(string name, string position);
    Worker();
    ~Worker();
    void toPresent();
};