// 4 - Variables
#include <iostream> //processes a source file before it compiles it 

using namespace std;

int main()									//header
{										//start of function body

int itsanumber; 								//integer
cout << "How many do you want?" << endl;
cin >> itsanumber; 								//user input

cout << "The new number is " << endl;
itsanumber = itsanumber +1;

cout << itsanumber << endl;

return 0;
}										//end of function body

//to run in terminal do
// $ g++ lesson4.cpp -o main
// $ ./main
