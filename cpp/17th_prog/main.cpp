#include <iostream>
#include "bDay.h"
#include "names.h"
using namespace std;

int main()
{
    bDay BdayObj(23,01,1990);

    names Camacho("Camacho", BdayObj);
    Camacho.printInfo();
return 0;
}
