// 30 - Function overloading
#include <iostream>  

using namespace std;

//functions prototype
void printNumber(int x);
void printNumber(float x);

//main function
int main()
{

int a = 54;
float b = 32.10145;

printNumber(a);
printNumber(b);

return 0;
}
//end of main function

void printNumber(int x)
{

cout << "Prints a integer " << x << "\n";

}

void printNumber(float x)
{

cout << "Prints a float " << x << "\n";

}


//to run in terminal do
// $ g++ lesson30.cpp -o main
// $ ./main
