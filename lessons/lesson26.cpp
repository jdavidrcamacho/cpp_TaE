// 26 - Logical operator
#include <iostream>  

using namespace std;

//main function
int main()
{

int age;
cout << "Age: \n";
cin>> age;

int money;
cout << "Money: \n";
cin>> money;

if(age>=18 && money>=500)		// && and
{					// || or
cout << "You are allowed \n";
}
else
{
cout << "You are not allowed \n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson26.cpp -o main
// $ ./main
