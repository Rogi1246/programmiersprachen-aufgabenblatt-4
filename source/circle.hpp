#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
#include "window.hpp"

class Circle {

private:
    Vec2 center_;
    float radius_;
    Color color_;

public:
    Circle();
    Circle(Vec2 const& center, float radius, Color const& color);

    void draw(Window const& window) const ;
    void draw(Window const& window, Color color) const;
    float circumference() const ;
    Vec2 center() const ;
    float radius() const ;
    bool is_inside(Vec2 const&) const ;

};

#endif