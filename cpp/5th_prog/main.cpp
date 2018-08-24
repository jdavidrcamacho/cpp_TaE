#include <iostream>

using namespace std;

//function prototypes
void printer();
void printNumber(int x);
int addNumber(int x, int y);

int main()
{
    printer();

    int x;
    int y;

    cout << "Enter the value of x" << endl;
    cin >> x;
    printNumber(x);

    cout << "Enter the value of y" << endl;
    cin >> y;
    printNumber(y);

    cout << "The sum is " << addNumber(x,y) << endl;

return 0;
}

void printer()
{
    cout << "Welcome to the void" << endl;
}

void printNumber(int x)
{
    cout << "This is equal to " << x << endl;
}

int addNumber(int x, int y)
{
    int result;
    result = x + y;

return result;
}
