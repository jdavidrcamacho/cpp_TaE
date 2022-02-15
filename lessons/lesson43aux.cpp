//cpp source file; it is where we build the functions
#include "lesson43aux.h"
#include <iostream> 

using namespace std;

MyClass::MyClass() //constructor function
{
cout << "This is the constructor" << endl;
}

MyClass::~MyClass() //deconstructor function
{
cout << "This is the deconstructor" << endl;
}

