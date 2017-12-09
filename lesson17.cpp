// 17 - if and else Statement
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
if(x<0)
{
cout << "and negative \n";
}
}
else
{
cout << "It is bigger \n";
}

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson17.cpp -o main
// $ ./main
