// 30 - Using arrays in calculations
#include <iostream>  

using namespace std;

//main function
int main()
{

int myArray[5] = {20,56,41,78,10};

int sum = 0;

for(int x =0; x<5; x++)
{
sum += myArray[x];
}

cout << sum << "\n";

return 0;
}
//end of main function


//to run in terminal do
// $ g++ lesson34.cpp -o main
// $ ./main
