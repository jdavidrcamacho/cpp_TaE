// 40 - sizeof
#include <iostream>  

using namespace std;

//main function
int main()
{
char a; //character
cout << sizeof(a) << endl;

int b; //integer
cout << sizeof(b) << endl;

float c; //float
cout << sizeof(c) << endl;

double d; //double
cout << sizeof(d) << endl;

double stuff[10]; //array with 10 elements
cout << sizeof(stuff) << endl;
cout << sizeof(stuff)/sizeof(stuff[0]) << endl;

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson40.cpp -o main
// $ ./main

