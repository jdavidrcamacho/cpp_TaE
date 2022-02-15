#include <iostream>
#include "names.h"
#include "bDay.h"
using namespace std;


names::names(string x, bDay bo)
: name(x), birth(bo)
{

}

void names::printInfo()
{
    cout << name << ", date ";
    birth.printDate();
}
