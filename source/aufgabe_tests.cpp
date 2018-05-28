#define CATCH_CONFIG_RUNNER

#include "circle.hpp"
#include "catch.hpp"

#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[])
{
    return Catch::Session().run(argc, argv);
}

TEST_CASE("sortedVectors", "[task 6]"){
    vector<Circle>sorted_circles;

    Circle circle1{Vec2{200.0, 300.0}, 130.0, Color{1.0, 1.0, 1.0}, "Angelika"};
    Circle circle2{Vec2{250.0, 300.0}, 100.0, Color{1.0, 0.0, 0.0}, "Brutus"};
    Circle circle3{Vec2{300.0, 200.0}, 150.0, Color{0.0, 1.0, 0.0}, "Carlos"};
    Circle circle4{Vec2{450.0, 200.0}, 90.0,  Color{0.0, 1.0, 1.0}, "Dorothy"};
    Circle circle5{Vec2{400.0, 200.0}, 280.0, Color{0.0, 0.0, 1.0}, "Erika"};

    sorted_circles.push_back(circle1);
    sorted_circles.push_back(circle2);
    sorted_circles.push_back(circle3);
    sorted_circles.push_back(circle4);
    sorted_circles.push_back(circle5);

    sort(sorted_circles.begin(), sorted_circles.end());

    REQUIRE(is_sorted(sorted_circles.begin(), sorted_circles.end()));
}

TEST_CASE("Lambda", "[task 7]"){
    vector<Circle>sorted_circles2;

    Circle circle6{Vec2{200.0, 300.0}, 130.0, Color{1.0, 1.0, 1.0}, "Angelika"};
    Circle circle7{Vec2{250.0, 300.0}, 100.0, Color{1.0, 0.0, 0.0}, "Brutus"};
    Circle circle8{Vec2{300.0, 200.0}, 150.0, Color{0.0, 1.0, 0.0}, "Carlos"};
    Circle circle9{Vec2{450.0, 200.0}, 90.0,  Color{0.0, 1.0, 1.0}, "Dorothy"};
    Circle circle10{Vec2{400.0, 200.0}, 280.0, Color{0.0, 0.0, 1.0}, "Erika"};

    sorted_circles2.push_back(circle6);
    sorted_circles2.push_back(circle7);
    sorted_circles2.push_back(circle8);
    sorted_circles2.push_back(circle9);
    sorted_circles2.push_back(circle10);

    sort(sorted_circles2.begin(), sorted_circles2.end(),
    [](Circle const& c1, Circle const& c2) -> bool{
        return (c1.radius() < c2.radius());});

    REQUIRE(is_sorted(sorted_circles2.begin(), sorted_circles2.end()));
}

TEST_CASE("VecFunctor", "[task 8]"){
    vector<Circle>sorted_circles3;

    Circle circle11{Vec2{200.0, 300.0}, 130.0, Color{1.0, 1.0, 1.0}, "Angelika"};
    Circle circle12{Vec2{250.0, 300.0}, 100.0, Color{1.0, 0.0, 0.0}, "Brutus"};
    Circle circle13{Vec2{300.0, 200.0}, 150.0, Color{0.0, 1.0, 0.0}, "Carlos"};
    Circle circle14{Vec2{450.0, 200.0}, 90.0,  Color{0.0, 1.0, 1.0}, "Dorothy"};
    Circle circle15{Vec2{400.0, 200.0}, 280.0, Color{0.0, 0.0, 1.0}, "Erika"};

    sorted_circles3.push_back(circle11);
    sorted_circles3.push_back(circle12);
    sorted_circles3.push_back(circle13);
    sorted_circles3.push_back(circle14);
    sorted_circles3.push_back(circle15);

    less<Circle> smaller;

    sort(sorted_circles3.begin(), sorted_circles3.end(), smaller);

    REQUIRE(is_sorted(sorted_circles3.begin(), sorted_circles3.end()));

}