//functions file;
#include "functions.h"
#include "constants.h"
#include <iostream> 

using namespace std;
float answer;

//area of a triangle
float triangle(float base, float height){
    answer = 0.5 * base * height;
    return answer;
}

//area of a circle
float circle(float radius){
    answer = mathPi * radius * radius;
    return answer;
}

//area of a square
float square(float side){
    answer = side * side;
    return answer;
}

//area of a rectangle
float rectangle(float length, float width){
    answer = length * width;
    return answer;
}