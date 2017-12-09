#include <iostream>  

using namespace std;

//main function
int main()
{

float age;
float ageTotal = 0;
int numPeople = 0;

cout << "Enter age or -1 to quit \n";
cin >> age;

while(age!=-1)
{
ageTotal = ageTotal + age;
numPeople++;

cout << "Enter age or -1 to quit \n";
cin >> age; 
}

float ageMean;
ageMean = ageTotal/numPeople;

cout << "Number of people: " << numPeople << "\n";
cout << "Average age: " << ageMean << "\n";

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson20.cpp -o main
// $ ./main
