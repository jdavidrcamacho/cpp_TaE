// 25 - switch
#include <iostream>  
#include <cmath>

using namespace std;

//main function
int main()
{

int age;
cout << "Enter the age: \n";
cin >> age;

switch(age)
{
case 16:
cout << "it is 16 \n";
break;	//Ends the switch

case 18:
cout << "It is 18 \n";
break;

case 21:
cout << "It is 21 \n";
break;

default:
cout << "It is not interesting \n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson25.cpp -o main
// $ ./main
