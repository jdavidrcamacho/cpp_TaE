#include <iostream>
#include "myClass.h"
using namespace std;

myClass::myClass(int x, int y)
: regVar(x), constVar(y)
{
    cout << "Its the constructor talking" << endl;
}

myClass::~myClass()
{
    cout << "Its the deconstructor talking" << endl;
}

void myClass::print()
{
    cout << "regVar = " << regVar << endl;
    cout << "constVar = " << constVar << endl;
}
