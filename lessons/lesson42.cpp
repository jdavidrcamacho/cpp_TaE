// 42 - Arrow member selection operator
#include <iostream> 
#include "lesson42aux.cpp" 

using namespace std;

//main function
int main()
{
MyClass myObject;
myObject.printStuff();

MyClass *myPointer = &myObject; //cretes a pointer
myPointer -> printStuff(); //It is necesary when we are using pointers

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson42.cpp -o main
// $ ./main

