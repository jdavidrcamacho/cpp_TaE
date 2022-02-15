// 26 - Random numbers generator
#include <iostream>  
#include <cstdlib>
#include <ctime>

using namespace std;

//main function
int main()
{

srand(time(0));			//seed using pc time

for(int x =1; x<5; x++)		//dice numbers
{
cout << 1+(rand()%6) << "\n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson27.cpp -o main
// $ ./main
