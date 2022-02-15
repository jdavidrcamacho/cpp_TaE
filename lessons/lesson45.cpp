// 45 - Member initializer
#include <iostream>  
#include "lesson45aux.cpp"

using namespace std;

//main function
int main()
{

MyClass oneObject(10,15); //assigns values to the variables
oneObject.print();

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson45.cpp -o main
// $ ./main


