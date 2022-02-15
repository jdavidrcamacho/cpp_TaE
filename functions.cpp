//functions file;
#include "functions.h"
#include "constants.h"
#include <iostream> 
#include <vector>
#include <cmath>

using namespace std;

float answer;                                                                   // to return a float
vector<float> v_answer;                                                         // to return a vector

/* area of a triangle */
float triangle(float base, float height){
    answer = 0.5 * base * height;
    return answer;
}

/* area of a circle */
float circle(float radius){
    answer = mathPi * radius * radius;
    return answer;
}

/* area of a square */
float square(float side){
    answer = side * side;
    return answer;
}

/* area of a rectangle */
float rectangle(float length, float width){
    answer = length * width;
    return answer;
}

/* mean of a vector */
float mean(std::vector<float> data){
    float m = 0;
    for (int n = 0; n < data.size(); n++){
        m += data[n];
    }
    answer = m / data.size();
    return answer;
}

/* Root mean square error*/
float rms(std::vector<float> data, std::vector<float> func){
    for (int n = 0; n < data.size(); n++){
        data[n] = func[n] - data[n];
    }
    float m = mean(data);
    for (int n = 0; n < data.size(); n++){
        data[n] = (data[n] - m) * (data[n] - m);
    }
    m = 0;
    for (int n = 0; n < data.size(); n++){
        m += data[n];
    }
    answer = sqrt(m / data.size());
    return answer;
}

/* linear function (y = ax + b) */
std::vector<float> linearFunc(std::vector<float> data, float a, float b){
    for (int n = 0; n < data.size(); n++){
        data[n] = a*data[n] + b;
    }
    v_answer = data;
    return v_answer; 
}