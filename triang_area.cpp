#include <iostream>  

using namespace std;

//function prototypes
float triang_area(float x, float y);

//main function
int main()
{

cout << "Please enter the values \n";

float x;
cin >> x;

float y;
cin >> y; 

if(x<0 or y<0){
cout << "mathERROR: the values must be positives \n";
}
else{
cout << "The area of the trangle is " << triang_area(x,y) << endl;
}

return 0;
}
//end of main function

//auxiliary functions
float triang_area(float x, float y)
{
float answer;
answer = x * y / 2;

return answer;
}
//end of auxiliary functions

//to run type in the terminal
//$ g++ triang_area.cpp -o main
//$ ./main 
