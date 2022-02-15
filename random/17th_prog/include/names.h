#ifndef NAMES_H
#define NAMES_H

#include <string>
#include "bDay.h"
using namespace std;


class names
{
    public:
        names(string x, bDay bo);
        void printInfo();
    private:
        string name;
        bDay birth;
};

#endif // NAMES_H
