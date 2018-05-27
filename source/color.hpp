#ifndef COLOR_HPP
#define COLOR_HPP

#include <iostream>

struct Color{
    float r_, g_, b_;

    Color(float value){
        if(value >= 0 && value <=1){
            r_ = value;
            g_ = value;
            b_ = value;
        }
        else {
            std::cout << "not allowed.. black chosen by default";
            r_ = 0.0f;
            g_ = 0.0f;
            b_ = 0.0f;
        }
    };

    Color(float r, float g, float b) {
        if(r >= 0 && r <= 1 && g >= 0 && g <= 1 && b >= 0 && b <= 1) {
            r_ = r;
            g_ = g;
            b_ = b;
        } else {
            std::cout << "not allowed.. black chosen by default";
            r_ = 0.0f;
            g_ = 0.0f;
            b_ = 0.0f;
        }
    };
};

#endif