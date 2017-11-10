#include <iostream>  

int main()									//header
{										//start of function body
using namespace std;

int mynumber; 									//integer
mynumber = 20;
cout << "My number is "; 							//output in console
cout << mynumber << endl;

mynumber = mynumber+1;
cout << "My new number is "; 							//output in console
cout << mynumber << endl;

return 0;
}										//end of function body

										//to run in terminal do
										// $ g++ new.cpp -o main
										// $ ./main
