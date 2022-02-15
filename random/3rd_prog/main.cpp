#include <iostream>

using namespace std;

int main()
{
    int x;  //declaring a variable but not assigning a value
    int y;
    int sum;

    cout << "Please enter a integer \n";
    cout << "x = ";
    cin >> x;

    cout << "Please enter another integer \n";
    cout << "y = ";
    cin >> y;

    sum = x +y;

    cout << "the sum of x and y is " << sum;
    cout << endl;

return 0;
}
