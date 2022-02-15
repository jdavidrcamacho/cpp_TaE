#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float amount;
    float money = 10000;
    float rate = 0.01;

    cout << "day : amount" << endl;
    for(int day = 1; day <= 30; day++)
    {
        amount = money * pow(1+rate, day); //power
        cout << day << " : " << amount << endl;
    }

return 0;
}
