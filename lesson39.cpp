// 39 - Pass by reference with pointers
#include <iostream>  

using namespace std;

//prototype functions
void passByValue(int x);
void passByReference(int *x);

//main function
int main()
{
int var1 = 13;
int var2 = 13;

passByValue(var1);
passByReference(&var2);

cout << "var1 = " << var1 << "\n";
cout << "var2 = " << var2 << "\n";

return 0;
}
//end of main function

void passByValue(int x)
{
x = 99;
}

void passByReference(int *x)
{
*x = 66;
}

//to run in terminal do
// $ g++ lesson39.cpp -o main
// $ ./main

