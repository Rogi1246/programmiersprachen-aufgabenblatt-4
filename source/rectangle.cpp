#ifndef RECTANGLE_CPP
#define RECTANGLE_CPP

#include "rectangle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

Rectangle::Rectangle() : min_(Vec2{ 0.0f , 0.0f}), max_(Vec2{ 0.0f , 0.0f}), color_({0.0f}) {};

Rectangle::Rectangle(Vec2 const& min, Vec2 const& max, Color const& color) :
    min_(min), max_(max), color_(color){};

Vec2 Rectangle::min() const {
    return min_;
}

Vec2 Rectangle::max() const {
    return max_;
}

float Rectangle::circumference() const {
    return 2 * (max_.x - min_.x) + 2 * (max_.y - min_.y);
}

void Rectangle::draw(Window const& window, Color color) const {
    window.draw_line(min_.x, min_.y, min_.x, max_.y, color.r_, color.g_, color.b_);
    window.draw_line(min_.x, max_.y, max_.x, max_.y, color.r_, color.g_, color.b_);
    window.draw_line(max_.x, max_.y, max_.x, min_.y, color.r_, color.g_, color.b_);
    window.draw_line(max_.x, min_.y, min_.x, min_.y, color.r_, color.g_, color.b_);
}

bool Rectangle::is_inside(Vec2 const& v) const {
    if(v.x > min_.x && v.x < max_.x && v.y > min_.y && v.y < max_.y) {
        return true;
    }
    else {
        return false;
    }
}

#endif
