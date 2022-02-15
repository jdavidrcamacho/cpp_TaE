// 35 - Passing arrays to functions
#include <iostream>  

using namespace std;

//function prototype
void printArray(int theArray[],int sizeArray);

//main function
int main()
{

int firstArray[3] = {20,54,675};
int secondArray[6] ={54,24,7,8,9,99};

printArray(firstArray, 3);

return 0;
}
//end of main function

void printArray(int theArray[],int sizeArray)
{

for(int x =0; x<sizeArray; x++)
{
cout << theArray[x] << "\n";
}

}


//to run in terminal do
// $ g++ lesson30.cpp -o main
// $ ./main
