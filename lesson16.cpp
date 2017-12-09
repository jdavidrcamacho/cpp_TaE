#include <iostream>  

using namespace std;

//main function
int main()
{

int x;
cout << "Enter a number: \n";
cin >> x;

if(x==10)
{
cout << "It is! \n"; 
}
else if(x<10)
{
cout << "It is smaller \n";
}
else
{
cout << "It is bigger \n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson16.cpp -o main
// $ ./main
