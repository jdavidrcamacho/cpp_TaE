//cpp source file; it is where we build the functions
#include "lesson45aux.h"
#include <iostream> 

using namespace std;

MyClass::MyClass(int a, int b) //constructor function
: regVar(a), constVar(b)
{
}

void MyClass::print()
{
cout << "regular variable is " << regVar << endl;
cout << "constant variable is " << constVar << endl;
}


