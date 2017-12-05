#include <iostream>  

using namespace std;

int main()								//header
{										//start of function body

int mynumber; 							//type of variable; integer
mynumber = 20;							//giving a value to mynumber
cout << "My number is "; 				//output in console
cout << mynumber << endl;

mynumber = mynumber+1;					//giving mynumber a new value
cout << "My new number is "; 			//output in console
cout << mynumber << endl;

int a = 4;
int b = 20;
int sum= a + b;
cout << sum << endl;

return 0;
}										//end of function body

//to run in terminal do
// $ g++ lesson3.cpp -o main
// $ ./main
