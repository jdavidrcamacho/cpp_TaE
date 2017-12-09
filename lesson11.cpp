// 11 - Functions That Use Multiple Parameters
#include <iostream>  

using namespace std;

//function prototype for things to work
int addNumbers(int x, int y);
int subNumbers(int x, int y);
float multNumbers(float x, float y);
float divNumbers(float x, float y);

//main function
int main()	
{		
cout << addNumbers(2,4) << endl;
cout << subNumbers(2,4) << endl;
cout << multNumbers(2.2,4) << endl;
cout << divNumbers(2.5,4) << endl;

return 0;
}		
//end of main function 

//other functions
int addNumbers(int x, int y)	
{
int answer = x + y;

return answer;
}				

int subNumbers(int x, int y)	
{
int answer = x - y;

return answer;
}				

float multNumbers(float x, float y)	
{
float answer = x * y;

return answer;
}					

float divNumbers(float x, float y)	
{
float answer = x / y;

return answer;
}
//end of other functions

//to run in terminal do
// $ g++ lesson11.cpp -o main
// $ ./main
