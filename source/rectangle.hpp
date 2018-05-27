#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Rectangle {

private:
    Vec2 min_;
    Vec2 max_;
    Color color_;

public:
    Rectangle();
    Rectangle(Vec2 const& min, Vec2 const& max, Color const& color);

    void draw(Window const& window) const;
    void draw(Window const& window, Color color) const;
    float circumference() const;
    Vec2 min() const ;
    Vec2 max() const ;
    bool is_inside(Vec2 const&) const ;

};

#endif