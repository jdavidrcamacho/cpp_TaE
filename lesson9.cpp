// 9 - Functions
#include <iostream>  

using namespace std;

void printer(); 	//function prototype for things to work
			//comes before main()

int main()		//this function returns something
{			//function body

printer();

return 0;
}			//end of function body

void printer()		//this function doesn't return stuff
{			//function body
cout << "It prints stuff \n";
}			//end of function body

//to run in terminal do
// $ g++ lesson9.cpp -o main
// $ ./main
