// 28 - Default arguments and parameters
#include <iostream>  

using namespace std;

//we put the default values on the prototype
int volume(int len = 1, int wid = 1, int h=1);

//main function
int main()
{

cout << volume() << "\n";

return 0;
}
//end of main function

int volume(int len, int wid, int h)
{
return len*wid*h;
}

//to run in terminal do
// $ g++ lesson28.cpp -o main
// $ ./main
