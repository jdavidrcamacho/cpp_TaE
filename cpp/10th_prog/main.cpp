#include <iostream>

using namespace std;

int main()
{
    int age;
    int total = 0;
    int number = 0;

    cout << "Enter first person age of -1 to quit" << endl;
    cin >> age;

    while(age != -1)
    {
        total = total + age;
        number ++;

        cout << "Enter next person age of -1 to quit" << endl;
        cin >> age;
    }
    cout << "Number of persons: " << number << endl;
    cout << "Average: " << total / number << endl;

return 0;
}
