// 10 - Creating Functions That Use Parameters
#include <iostream>  

using namespace std;

void printStuff(int x)	//header
{			//start of function body
cout << "The number is " << x << endl;

}			//end of function body


int main() 	//header
{		//start of function body
printStuff(80);

return 0;
}		//end of function body

//to run in terminal do
// $ g++ lesson10.cpp -o main
// $ ./main
