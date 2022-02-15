// 12 - Introduction to Classes and Objects
#include <iostream>  

using namespace std;

//Classes
class MyClass
{
public:
void Stuff() //public function inside the Class
{
cout << "Prints stuff" << endl;
};

};
//end of Classes


//main function
int main()
{
MyClass myObject; //Object of the Class
myObject.Stuff();

return 0;
}
//end of main function


//to run in terminal do
// $ g++ lesson12.cpp -o main
// $ ./main
