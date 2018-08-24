#include <iostream>

using namespace std;

int main()
{
    //Pointers
    int pointing;
    cout << &pointing << endl;  //& is the adress operator

    int *pointer; //making a pointer
    pointer = &pointing;
    cout << pointer << endl;

    //sizeof
    char c;
    cout << sizeof(c) << endl;

    int myArray[5] = {10, 5, 7, 2, 0};
    cout << sizeof(myArray) /sizeof(myArray[0]) << endl;

    //More pointers
    int a[5];
    int *ap0 = &a[0];
    int *ap1 = &a[1];
    int *ap2 = &a[2];

    cout << "ap0 is at " << ap0 << endl;
    cout << "ap1 is at " << ap1 << endl;
    cout << "ap2 is at " << ap2 << endl;

return 0;
}
