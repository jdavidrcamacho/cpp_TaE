#include <iostream>  
#include "functions.cpp"
#include "constants.h"

using namespace std;


//main function
int main(){

    cout << triangle(10, 2.1) << endl;
    cout << circle(2.3) << endl;
    cout << square(2.25) << endl;
    cout << rectangle(2, 3.1) << endl;

    
return 0;
}
//end of main function



//to run in terminal do
// $ g++ areas.cpp -o run
// $ ./run
