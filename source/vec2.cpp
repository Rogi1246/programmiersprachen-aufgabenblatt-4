#ifndef VEC2_CPP
#define VEC2_CPP

#include "vec2.hpp"
#include <iostream>


Vec2::Vec2() :x(0.0f), y(0.0f) {};

Vec2::Vec2(float x, float y) : x(x), y(y) {};

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
    if (s == 0.0f) { std::cout << -1 ; }

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

Vec2 operator+(Vec2 const& u, Vec2 const& v) {
    return Vec2{ u.x + v.x, u.y + v.y};
}

Vec2 operator-(Vec2 const& u, Vec2 const& v) {
    return Vec2{ u.x - v.x, u.y - v.y };
}

Vec2 operator*(Vec2 const& v, float s) {
    return Vec2{ v.x * s, v.y * s };
}

Vec2 operator/(Vec2 const& v, float s){
    if (s == 0.0f) {
        std::cout << "Division by zero not allowed";
        return Vec2{ v.x, v.y };
    }
    else {
        return Vec2{ v.x / s, v.y / s };
    }
}

Vec2 operator*(float s, Vec2 const& v) {
    return Vec2{ v.x * s, v.y * s };
}

#endif