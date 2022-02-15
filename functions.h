// functions.h file
#include <vector>

#ifndef functions_H
#define functions_H

float triangle(float base, float height);
float circle(float radius);
float square(float side);
float rectangle(float length, float width);

float mean(std::vector<float> data);
float rms(std::vector<float> data, std::vector<float> func);

std::vector<float> linearFunc(std::vector<float> data, float a, float b);

#endif