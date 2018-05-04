#ifndef CIRCLE_CPP
#define CIRCLE_CPP
#define _USE_MATH_DEFINES

#include <math.h>
#include "circle.hpp"
#include "vec2.hpp"
#include "window.hpp"

Circle::Circle() : center_({ 0.0f , 0.0f}), radius_(0.0f), color_({0.0f}) {};

Circle::Circle(Vec2 const& center, float radius, Color const& color) :
    center_(center), radius_(radius), color_(color){};

float Circle::radius() const {
    return radius_;
}

Vec2 Circle::center() const {
    return center_;
}

float Circle::circumference() const {
    return 2 * (float)M_PI * radius_;
}

void Circle::draw(Window const &window) const {
    Vec2 startVec{};
    Vec2 endVec{};
    for(int i = 0; i < 360; i++){
        startVec = { (float)sin(((2 * M_PI) / 360) * i) * radius_ , (float)cos(((2 * M_PI) / 360) * i) * radius_ };
        endVec = { (float)sin(((2 * M_PI) / 360) * (i + 1)) * radius_ , (float)cos(((2 * M_PI) / 360) * (i + 1)) * radius_ };

        window.draw_line((startVec + center_).x, (startVec + center_).y, (endVec + center_).x, (endVec + center_).y, color.r_, color.g_, color.b_);
    }
}

bool Circle::is_inside(Vec2 const & v) const {
    Vec2 difference = v - center_;
    if (sqrt(pow(difference.x, 2) + pow(difference.y, 2)) <= radius_) {
        return true;
    }
    else {
        return false;
    }
}

#endif