// Square root of positive values
#include <iostream>  
#include <cmath>

using namespace std;

//function prototypes
float squareRoot(float x);
float check(float x);

//main function
int main()
{

float value;

cout << "Enter your value: ";
cin >> value;

cout << "Result: " << check(value) << "\n";  

return 0;
}
//end of main function

//auxiliary functions
float squareRoot(float x)
{
float sqr_ans;
sqr_ans = pow(x, 1.0/2.0);

return sqr_ans;
}

float check(float x)
{
if(x<0)
{ 
cout << "mathERROR: not a positive value \n";
}
else
{
float ans;
ans = squareRoot(x);
return ans;
}

}
//end of auxiliary functions

//to run type in the terminal
//$ g++ trial.cpp -o main
//$ ./main 
