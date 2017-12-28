//cpp source file; it is where we build the functions
#include "trial2aux.h"
#include <iostream> 

using namespace std;

MyClass::MyClass(float a) //constructor function
: radius(a)
{
}

void MyClass::printArea()
{
const float p = 3.14159;
float area = p*radius*radius;

cout << "The radius is " << radius << endl;
cout << "The area is " << area << endl;
cout << "\n";
}

