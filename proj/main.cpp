// main.cpp file
#include <iostream>
#include <fstream>
#include <vector>
#include <cmath>
#include "functions.cpp"

using namespace std;

ifstream infile;

vector<float> t;
vector<float> y;
vector<float> yerr;
vector<float> result;

string line;
float element;
int n; 

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
