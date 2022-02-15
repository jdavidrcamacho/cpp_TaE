// 32 - Arrays
#include <iostream>  

using namespace std;

//main function
int main()
{

int myArray[5] = {55,14,20,19,21}; // array[array size]={array elements};

cout << myArray[2] << "\n"; //prints 3rd element; starts by 0 like python

myArray[2]=myArray[2]*2; //multiplies the 3rd element by 2

cout << myArray[2] << "\n";

return 0;
}
//end of main function



//to run in terminal do
// $ g++ lesson30.cpp -o main
// $ ./main
