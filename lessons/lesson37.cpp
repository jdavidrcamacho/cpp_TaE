// 37 - Printing multidimentional arrays
#include <iostream>  

using namespace std;

//main function
int main()
{

int myArray[2][3] = {{2,3,4},{8,9,10}}; //[rows][columns]

for(int row = 0; row < 2; row++)
{
for(int column = 0; column <3; column++)
{
cout << myArray[row][column] << " ";
}

cout << endl;
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson37.cpp -o main
// $ ./main

