// 38 - Introduction to pointers
#include <iostream>  

using namespace std;

//main function
int main()
{

int var1 = 5;		//integer
cout << &var1 << "\n";	//memory adress where it is stored 

int *varPointer;	//defining a pointer
varPointer = &var1;	//pointer is equal to the memory adress of var1
cout << varPointer << "\n";

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson38.cpp -o main
// $ ./main

