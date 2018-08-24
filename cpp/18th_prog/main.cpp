#include <iostream>

using namespace std;

template <class generic>
generic addStuff(generic a, generic b)
{
    return a + b;
}


int main()
{
    int x = 1, y = 2;
    float z;
    z = addStuff(x, y);
    cout << z << endl;

    z = float(x)/float(y);
    cout << z << endl;

    z = ((double)x) / ((double)y);
    cout << z << endl;

return 0;
}
