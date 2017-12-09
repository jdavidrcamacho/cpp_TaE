// 22 - for loop
#include <iostream>  

using namespace std;

//main function
int main()
{

int xi;
cout << "Starting point: \n";
cin >> xi;

int xf;
cout << "Ending point: \n";
cin >> xf;

int x0;
cout << "Step: \n";
cin >> x0;

cout << "Values: \n";
//(Initialization; Loop continuation condition; increment) 
for(int x = xi; x<=xf; x+=x0)
{
cout << x << "\n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson22.cpp -o main
// $ ./main
