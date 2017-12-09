#include <iostream>  
#include <string>

using namespace std;

//Class
class MyClass
{
public: //public function
MyClass(string z) //constructor
{
setName(z);
}

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
MyClass myobject("Hello there!");
cout << myobject.getName() << endl;

MyClass myobject2("Ah General Kenobi, I have been expecting you!");
cout << myobject2.getName() << endl;

return 0;
}
//end of main function

//to run in terminal do
// $ g++ lesson14.cpp -o main
// $ ./main
