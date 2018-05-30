#ifndef CIRCLE_HPP
#define CIRCLE_HPP

#include "vec2.hpp"
#include "color.hpp"
//#include "window.hpp"

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Circle {

private:
    Vec2 center_;
    float radius_;
    Color color_;
    string name_;

public:
    Circle();
    Circle(float radius);
    Circle(Vec2 const& center, float radius, Color const& color);
    Circle(Vec2 const& center, float radius, string name);
    Circle(Vec2 const& center, float radius, Color const& color ,string name);


    /*
    void draw(Window const& window) const ;
    void draw(Window const& window, Color color) const;
    */
    float circumference() const ;
    Vec2 center() const ;
    float radius() const ;
    bool is_inside(Vec2 const&) const ;
    string name() const;
    ostream& print(ostream & out) const;
};

ostream& operator<<(ostream& out,Circle const& Circle);
bool operator <(Circle const& c1, Circle const& c2);
bool operator >(Circle const& c1, Circle const& c2);
bool operator ==(Circle const& c1, Circle const& c2);

struct circ_less{
    bool operator()(Circle const& c1, Circle const& c2)
    {
        if(c1.name().compare(c2.name())==0&&c1.name().size()!=0)
        {
            cout<< c1.name()<<" already exists, please type in different name." << '\n';
            return false;
        }
        if(c1.radius()<c2.radius())
        {
            return true;
        }
        else if(c1.radius()==c2.radius())
        {
            if(c1.center().x==c2.center().x)
            {
                return c1.center().y<c2.center().y;
            }

            else if(c1.center().x<c2.center().x)
            {
                return true;
            }
        }
        return false;
    }
};

template<typename T>
class lesser
{
public:
    bool operator()(Circle const& circle1, Circle const& circle2)
    {
        return circle1 < circle2;
    }
};


#endif