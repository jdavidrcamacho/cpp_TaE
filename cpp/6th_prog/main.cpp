#include <iostream>
#include <string>
using namespace std;

class MyClass   //this is a class
{
    public:
        MyClass(string z) // this is a constructor
        {
            setName(z);
        }

        void justPrint()
        {
            cout << "Please wait..." << endl;
        }

    private:
        string name;

    public:
        void setName(string x)
        {
            name = x;   //sets private name into was x is
        }

        string getName()
        {
        return name;
        }

}; //needs ; in the end

int main()
{
    MyClass myObject("This is the z"); //this is a object of MyClass

    myObject.justPrint();

    string x;
    cout << "Please enter a name" << endl;
    cin >> x;
    myObject.setName(x);

    cout << "The name is " << myObject.getName() << endl;

return 0;
}


// We need to make object before using the stuff inside a class
// Making a class variable public its not a good idea
// Constructors are used to give variables an initial value
