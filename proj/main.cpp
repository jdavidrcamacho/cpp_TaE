#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>

using namespace std;

ifstream infile;
vector<float> t;
vector<float> y;
vector<float> yerr;
float element;
int n; 

//main function
int main(){
    cout << "hello world" << endl;

    int num = 0;
    infile.open("data.txt");

    if (infile.fail()){
        cout << "Error reading file!";
    } else{
        // Push items into a vector
        while (!infile.eof()){
            infile >> element;
            t.push_back(element);
            infile >> element;
            y.push_back(element);
            infile >> element;
            yerr.push_back(element);
            ++num;
         }
        infile.close(); // Close the file.

        // Display the data:
        cout << "The data is: ";
        for (n = 0; n < y.size(); n++){
            cout << y[n] << " ";
        }
        cout << endl;
        cout << "The error is: ";
        for (n = 0; n < y.size(); n++){
            cout << yerr[n] << " ";
        }
        cout << endl;
    }

    cout << "bye bye" << endl;
    return 0;
}
//end of main function

//to run in terminal do
// $ make main
// $ ./main
