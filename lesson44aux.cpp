//cpp source file; it is where we build the functions
#include "lesson44aux.h"
#include <iostream> 

using namespace std;

MyClass::MyClass() //constructor function
{
}

void MyClass::printStuff()
{
cout << "It is a regular function" << endl;
}

void MyClass::printMoreStuff() const
{
cout << "It is a constant function" << endl;
}



