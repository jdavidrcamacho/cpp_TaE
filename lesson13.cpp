// 13 - Using Variables in Classes
#include <iostream>  
#include <string>

using namespace std;

//Class
class MyClass
{
public: //public function
void setName(string x) //sets the private name into x
{
name = x;
}
string getName() //returns private name
{
return name;
}

private: //private function
string name;

};
//end of Class


//main function
int main()
{
MyClass myobject;

myobject.setName("It is a string");

cout << myobject.getName() << endl;

return 0;
}
//end of main function


//to run in terminal do
// $ g++ lesson13.cpp -o main
// $ ./main
