// Area of a circle
#include <iostream>  
#include "trial2aux.cpp"

using namespace std;

//main function
int main()
{
MyClass oneObject(10); //assigns values to the variables
oneObject.printArea();

MyClass twoObject(2); //assigns values to the variables
twoObject.printArea();

MyClass threeObject(3); //assigns values to the variables
threeObject.printArea();

return 0;
}
//end of main function

//to run in terminal do
// $ g++ trial2.cpp -o main
// $ ./main


