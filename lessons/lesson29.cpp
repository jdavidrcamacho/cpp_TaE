// 29 - Scope
#include <iostream>  
#include <cmath>

using namespace std;

void stuff();

int x = 20;		//global variable

//main function
int main()
{

double x = 30;		//local variable

cout << "Makes use of the local variable " << x << "\n";

stuff();

cout << "Makes use of the global variable "<< ::x << "\n";	

return 0;
}
//end of main function

void stuff()
{

cout << x << "\n";

}

//to run in terminal do
// $ g++ lesson29.cpp -o main
// $ ./main
