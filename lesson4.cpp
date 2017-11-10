#include <iostream> //processes a source file before it compiles it 

int main()									//header
{										//start of function body
using namespace std;

int itsanumber; 								//integer
cout << "How many do you want?" << endl;
cin >> itsanumber; 								//user input

cout << "The new number is " << endl;
itsanumber = itsanumber +1;

cout << itsanumber << endl;

return 0;
}										//end of function body

										//to run in terminal do
										// $ g++ new.cpp -o main
										// $ ./main
