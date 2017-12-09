// 23 - Stock market simulator
#include <iostream>  
#include <cmath>

using namespace std;

//main function
int main()
{

float a;
float p = 10000;
float r = 0.01;

for(int year = 1; year <= 30; year++)
{
a = p * pow(1+r,year);
cout << year << "---" << a << "€ \n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson23.cpp -o main
// $ ./main
