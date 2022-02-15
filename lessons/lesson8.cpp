// 8 - if Statement
#include <iostream>  

using namespace std;

int main()								//header
{										//start of function body

int a;
cout << "Give me a number \n";
cin >> a;
int b;
cout <<"Give me another \n";
cin >> b;

if(a==b){								//body of the if statement
	cout << "Cool \n";					// == equal to
}										// != diferent to
else{									// >= greater or equal to
cout << "Not cool \n";					// <= less than or equal to
}

return 0;
}										//end of function body

//to run in terminal do
// $ g++ lesson8.cpp -o main
// $ ./main
