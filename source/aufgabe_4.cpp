#include <iostream>
#include <set>
#include <string>
#include <algorithm>

#include "circle.hpp"

int main(){

    Circle circle1{Vec2{250.0, 300.0}, 130.0, Color{1.0, 1.0, 1.0}, "Angelika"};
    Circle circle2{Vec2{250.0, 300.0}, 170.0, Color{1.0, 1.0, 0.0}, "Angelika"};
    Circle circle3{Vec2{250.0, 300.0}, 100.0, Color{1.0, 0.0, 0.0}, "Brutus"};
    Circle circle4{Vec2{250.0, 200.0}, 150.0, Color{0.0, 1.0, 0.0}, "Carlos"};
    Circle circle5{Vec2{250.0, 200.0}, 90.0,  Color{0.0, 1.0, 1.0}, "Dorothy"};

    set<Circle, circ_less> circles;
    circles.insert(circle1);
    circles.insert(circle2);
    circles.insert(circle3);
    circles.insert(circle4);
    circles.insert(circle5);

    cout << "Who are you looking for ? : " << '\n';
    string search;
    cin >> search;

    for(auto it = circles.begin(); it!=circles.end(); it++){
        if((*it).name().compare(search) == 0){

            cout << *it << '\n' ;
        }
    }

    return 0;
}