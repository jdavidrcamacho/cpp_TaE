#include <iostream> //processes a source file before it compiles it 
#include<cmath> 								//to include the cmath library

int main()									//header
{										//start of function body
using namespace std;

double num1; 									//double for real number
cout << "Put your number..." << endl;
cin >> num1;

double num2;
num2 = sqrt(num1);
cout << "The result is " << num2 << endl;

return 0;
}										//end of function body

										//to run in terminal do
										// $ g++ new.cpp -o main
										// $ ./main
