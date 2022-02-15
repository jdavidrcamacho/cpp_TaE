// 19 - Simple Program Using a Loop
#include <iostream>  

using namespace std;

//main function
int main()
{

int x = 1;
int number;
int total = 0;

cout << "Enter the numbers \n";

while(x<=5)
{
cin >> number;
total = total + number;
x++;
}

cout << "The total is " << total << "\n";

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson19.cpp -o main
// $ ./main
