// 41 - Pointers and math
#include <iostream>  

using namespace std;

//main function
int main()
{

int stuff[5]; //array that can hold 5 integers

int *bp0 = &stuff[0];
cout << "bp0 is " << bp0 << endl;
int *bp1 = &stuff[1];
cout << "bp1 is " << bp1 << endl;
int *bp2 = &stuff[2];
cout << "bp2 is " << bp2 << endl;

bp0 +=2; //points now to a new memory two elements away
cout << "bp0 is now" << bp0 << endl;

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson41.cpp -o main
// $ ./main

