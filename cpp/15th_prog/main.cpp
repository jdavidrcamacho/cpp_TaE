#include <iostream>
#include "meinclass.h"
using namespace std;

int main()
{
    meinclass meinObj;

    //Accessing with an object
    meinObj.printing();

    //Arrow menber selection operator
    meinclass *meinPointer = &meinObj;

    //Accessing with a pointer
    meinPointer->printing();

return 0;
}
