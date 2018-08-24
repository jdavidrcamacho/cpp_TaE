#include <iostream>

using namespace std;

int main()
{
    int x;

    cout << "Enter a value: " << endl;
    cin >> x;
    switch(x)
    {
        case 16:
            cout << "Its not 16" << endl;
            break;
        case 18:
            cout << "Its not 18" << endl;
            break;
        case 20:
            cout << "Its 20!" << endl;
            break;
        default:
            cout << "Value not found" << endl;
    }

return 0;
}
