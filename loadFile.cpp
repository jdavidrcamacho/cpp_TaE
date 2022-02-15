// loadFile.cpp file
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;



//main function
int main(){
    cout << "Welcome" << endl;

    infile.open("data.txt");
    bool header = false;

    if (infile.fail()){
        cout << "Error reading file!";
    } else{
        // Push items into a vector
        while (!infile.eof()){
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
    }
return 0;
}