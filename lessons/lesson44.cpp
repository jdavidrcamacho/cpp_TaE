// 44 - Constant objects
#include <iostream>
#include "lesson44aux.cpp"

using namespace std;

//main function
int main()
{
const int x = 3; //makes the value of x constant

MyClass oneObject;
oneObject.printStuff();

const MyClass constObject;
constObject.printMoreStuff();

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson44.cpp -o main
// $ ./main

