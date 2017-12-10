// 31 - Recursion
#include <iostream>  

using namespace std;

//functions prototype
int factorial(int x);

//main function
int main()
{

int x;
cout << "Enter a value \n";
cin >> x;
cout << factorial(x) << "\n";

return 0;
}
//end of main function

int factorial(int x)
{

if(x==1)
{
return 1;
}
else
{
return x*factorial(x-1);
}

}

//to run in terminal do
// $ g++ lesson31.cpp -o main
// $ ./main
