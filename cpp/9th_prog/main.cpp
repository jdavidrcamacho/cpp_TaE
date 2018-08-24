#include <iostream>

using namespace std;

int main()
{
    int i = 0;

    while(i <= 5)
    {
        cout << "Number " << i << endl;
        i ++;
    }

    int j = 0;
    int number;
    int total = 0;

    cout << "Enter a number " << endl;
    while(j <= 5)
    {
        cin >> number;
        total = total + number;
        j ++;
    }
    cout << "The sum is " << total << endl;

return 0;
}
