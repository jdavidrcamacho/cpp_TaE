// 33 - Creating arrays using loops
#include <iostream>  

using namespace std;

//main function
int main()
{

int sizeArray;
cout << "Enter array size \n";
cin >> sizeArray;
int myArray[sizeArray]; //creates array for # integers

cout << "Enter array elements \n";
for(int x = 0; x < sizeArray; x++)
{
int y;
cin >> y;
myArray[x] = y;
}

cout << "Element - Value \n";
for(int x = 0; x < sizeArray; x++)
{
cout << x << " --------- " << myArray[x] << "\n";
}

return 0;
}

//end of main function

//to run in terminal do
// $ g++ lesson33.cpp -o main
// $ ./main
