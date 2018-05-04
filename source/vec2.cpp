#ifndef VEC2_CPP
#define VEC2_CPP
#include "vec2.hpp"
#include <iostream>
using namespace std ;


Vec2::Vec2() :x(0.0), y(0.0) {};

Vec2::Vec2(float x, float y) : x(x), y(y) {}

Vec2& Vec2::operator+=(Vec2 const &v) {
    x += v.x;
    y += v.y;
    return *this;

}

Vec2& Vec2::operator-=(Vec2 const &v) {
    x -= v.x;
    y -= v.y;
    return *this;

}

Vec2& Vec2::operator/=(float s) {
    if (s == 0.0) { cout << -1 ; }

    else {
        x /= s;
        y /= s;
    }
return *this;
}

Vec2& Vec2::operator*=(float s) {
    x*= s;
    y*= s;
    return *this;
}
