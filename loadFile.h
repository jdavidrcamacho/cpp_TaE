// loadFile.h file
#include <vector>
#include <fstream>

#ifndef loadFile_H
#define loadFile_H

ifstream infile;

vector<float> t;
vector<float> y;
vector<float> yerr;

string line;
float element1, element2, element3;
int n; 