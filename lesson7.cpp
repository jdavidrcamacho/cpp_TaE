#include <iostream>  

using namespace std;

int main()								//header
{										//start of function body

int x = 8 - 4;							//subtraction
int y = 8 + 4;							//addition
int z = 8 * 4; 							//multiplication
int w1 = 81 / 2; 						//integer division, gives a integer value
float w2 = 81./ 2; 						//division, gives a float

int w3 = 24 % 7;						//remainder

cout << w1 << endl;
cout << w2 << endl;

return 0;
}										//end of function body

//to run in terminal do
// $ g++ lesson7.cpp -o main
// $ ./main
