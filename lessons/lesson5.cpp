// 5 - Creating a Basic Calculator
#include <iostream>  

using namespace std;

int main()								//header
{										//start of function body

int a;
int b;
int sum;

cout << "The numbers are \n";
cin >> a;
cout << "and \n";
cin >> b;

sum = a + b;
cout << "The sum is " << sum << endl;

return 0;
}										//end of function body

//to run in terminal do
// $ g++ lesson5.cpp -o main
// $ ./main
