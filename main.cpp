// main.cpp file
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "functions.cpp"
#include "main.h"

using namespace std;

//main function
int main(){
    cout << "Welcome" << endl;

    int num = 0;
    infile.open("data.txt");
    bool header = true;

    if (infile.fail()){
        cout << "Error reading file!";
    } else{
        // Push items into a vector
        while (!infile.eof()){
            if (header == true){
                getline(infile, line); //just skip the header line 
            }
            infile >> element1 >> element2 >> element3;
            if(infile.eof() ) break;
            t.push_back(element1);
            y.push_back(element2);
            yerr.push_back(element3);
         }
        infile.close(); // Close the file.


        // Display the data:
        cout << "The data is: ";
        for (n = 0; n < y.size(); n++){
            cout << y[n] << " ";
        }
        cout << endl;
        element = mean(y);
        cout << "The mean is: " << element << endl;
        
        // RMS 
        float res = rms(y, linearFunc(t, 1, 0));
        cout << "RMS is: " << res << endl;
    }

    cout << "Bye" << endl;
    return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main
