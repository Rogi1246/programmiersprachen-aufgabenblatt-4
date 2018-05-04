#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#define NOGDI
#include <catch.hpp>
#include "vec2.hpp"
#include "mat2.hpp"
#include "color.hpp"
#include "rectangle.hpp"
#include "circle.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
  std::cin.get();
  return 0;
}

TEST_CASE("Test cases for Vec2") {
  Vec2 a = Vec2{};
  Vec2 b = Vec2{ 5.0f,2.0f };
  Vec2 c = Vec2{ 2.0f,1.0f };

  SECTION("Empty constructor test") {
    REQUIRE(a.x == 0.0f);
    REQUIRE(a.y == 0.0f);
  }

  SECTION("Constructor test") {
    REQUIRE(b.x == 5.0f);
    REQUIRE(b.y == 2.0f);
  }

  SECTION("Operator += test") {
    a += b;
    b += c;
    REQUIRE(b.x == 7.0f);
    REQUIRE(b.y == 3.0f);
    REQUIRE(a.x == 5.0f);
    REQUIRE(a.y == 2.0f);
  }

  SECTION("Operator -= test") {
    a -= b;
    b -= c;
    REQUIRE(b.x == 3.0f);
    REQUIRE(b.y == 1.0f);
    REQUIRE(a.x == -5.0f);
    REQUIRE(a.y == -2.0f);
  }

  SECTION("Operator *= test") {
    b *= 3.0f;
    c *= 3.0f;
    REQUIRE(b.x == 15.0f);
    REQUIRE(b.y == 6.0f);
    REQUIRE(c.x == 6.0f);
    REQUIRE(c.y == 3.0f);
  }

  SECTION("Operator /= test") {
    b /= 2;
    c /= 2;
    REQUIRE(b.x == 2.5f);
    REQUIRE(b.y == 1.0f);
    REQUIRE(c.x == 1.0f);
    REQUIRE(c.y == 0.5f);
  }

  SECTION("Operator + test") {
    Vec2 d = b + a;
    REQUIRE(d.x == 5.0f);
    REQUIRE(d.y == 2.0f);
    d = b + c;
    REQUIRE(d.x == 7.0f);
    REQUIRE(d.y == 3.0f);
  }

  SECTION("Operator - test") {
    Vec2 d = b - a;
    REQUIRE(d.x == 5.0f);
    REQUIRE(d.y == 2.0f);
    d = b - c;
    REQUIRE(d.x == 3.0f);
    REQUIRE(d.y == 1.0f);
  }

  SECTION("Operator * test") {
    Vec2 d = b * 5.0f;
    REQUIRE(d.x == 25.0f);
    REQUIRE(d.y == 10.0f);
    d = c * 3;
    REQUIRE(d.x == 6.0f);
    REQUIRE(d.y == 3.0f);
  }

  SECTION("Operator / test") {
    Vec2 d = b / 2.0f;
    REQUIRE(d.x == 2.5f);
    REQUIRE(d.y == 1.0f);
    d = c / 2.0f;
    REQUIRE(d.x == 1.0f);
    REQUIRE(d.y == 0.5f);
  }

  SECTION("is_inside test") {
    Vec2 point{ 100.0f,100.0f };
    Rectangle rect{ {0.0f,0.0f},{200.0f,200.0f },{0.0f,0.0f,0.0f} };
    REQUIRE(rect.is_inside(point));
    point = { 300.0f,-15.4f };
    REQUIRE(!rect.is_inside(point));
  }

}

TEST_CASE("Test cases for Mat2") {
  Mat2 a = {{2.0f,1.0f},{1.0f,3.0f}};
  Mat2 b = { {1.0f,4.0f},{2.0f,1.0f} };
  Mat2 c = {};
  Vec2 r = { 5.0f,7.0f };

  SECTION("Operator *= test") {
    a *= b;
    REQUIRE(a.firstRow_.x == 6.0f);
    REQUIRE(a.firstRow_.y == 13.0f);
    REQUIRE(a.secondRow_.x == 5.0f);
    REQUIRE(a.secondRow_.y == 5.0f);
    b *= c;
    REQUIRE(b.firstRow_.x == 1.0f);
    REQUIRE(b.firstRow_.y == 4.0f);
    REQUIRE(b.secondRow_.x == 2.0f);
    REQUIRE(b.secondRow_.y == 1.0f);
  }

  SECTION("Operator * test") {
    Mat2 d = a*b;
    REQUIRE(d.firstRow_.x == 6.0f);
    REQUIRE(d.firstRow_.y == 13.0f);
    REQUIRE(d.secondRow_.x == 5.0f);
    REQUIRE(d.secondRow_.y == 5.0f);
    Mat2 e = a * c;
    REQUIRE(e.firstRow_.x == 2.0f);
    REQUIRE(e.firstRow_.y == 1.0f);
    REQUIRE(e.secondRow_.x == 1.0f);
    REQUIRE(e.secondRow_.y == 3.0f);
  }

  SECTION("Operator * with Vec2 test") {
    Vec2 q = a * r;
    REQUIRE(q.x == 17.0f);
    REQUIRE(q.y == 26.0f);
    q = r * a;
    REQUIRE(q.x == 17.0f);
    REQUIRE(q.y == 26.0f);
  }

  SECTION("Determinant method test") {
    REQUIRE(a.det() == 5.0f);
    REQUIRE(b.det() == -7.0f);
  }

  SECTION("Inverse test") {
    Mat2 t = inverse(a);
    REQUIRE(t.firstRow_.x == Approx(0.6f));
    REQUIRE(t.firstRow_.y == Approx(-0.2f));
    REQUIRE(t.secondRow_.x == Approx(-0.2f));
    REQUIRE(t.secondRow_.y == Approx(0.4f));
    t = inverse(b);
    REQUIRE(t.firstRow_.x == Approx(-1 / (double) 7));
    REQUIRE(t.firstRow_.y == Approx(4 / (double) 7));
    REQUIRE(t.secondRow_.x == Approx(2/ (double)7));
    REQUIRE(t.secondRow_.y == Approx(-1/ (double)7));
  }

  SECTION("Transpose test") {
    Mat2 t = transpose(a);
    REQUIRE(t.firstRow_.x == 2);
    REQUIRE(t.firstRow_.y == 1);
    REQUIRE(t.secondRow_.x == 1);
    REQUIRE(t.secondRow_.y == 3);
    t = transpose(b);
    REQUIRE(t.firstRow_.x == 1);
    REQUIRE(t.firstRow_.y == 2);
    REQUIRE(t.secondRow_.x == 4);
    REQUIRE(t.secondRow_.y == 1);
  }

  SECTION("Rotation matrix test") {
    Mat2 t = make_rotation_mat2((float)M_PI_2);
    REQUIRE(t.firstRow_.x == Approx(0.0f));
    REQUIRE(t.firstRow_.y == Approx(1.0f));
    REQUIRE(t.secondRow_.x == Approx(-1.0f));
    REQUIRE(t.secondRow_.y == Approx(0.0f));

    t = make_rotation_mat2((float)M_PI);
    REQUIRE(t.firstRow_.x == Approx(-1.0f));
    REQUIRE(t.firstRow_.y == Approx(0.0f));
    REQUIRE(t.secondRow_.x == Approx(0.0f));
    REQUIRE(t.secondRow_.y == Approx(-1.0f));
  }
}

TEST_CASE("Test cases für Color") {
  SECTION("Constructor test"){
    Color black{ 0.0 };
    REQUIRE(black.r_ == Approx(0.0f));
    REQUIRE(black.g_ == Approx(0.0f));
    REQUIRE(black.b_ == Approx(0.0f));

    Color red{ 1.0,0.0,0.0 };
    REQUIRE(red.r_ == Approx(1.0f));
    REQUIRE(red.g_ == Approx(0.0f));
    REQUIRE(red.b_ == Approx(0.0f));

    Color error{ 5.0 };
    REQUIRE(error.r_ == Approx(0.0f));
    REQUIRE(error.g_ == Approx(0.0f));
    REQUIRE(error.b_ == Approx(0.0f));
  }
}

TEST_CASE("Test cases for Rectangle") {
  Rectangle a{};
  Rectangle b{ { 1.0,1.0 },{ 2.0,2.0 }, {1.0f} };

  SECTION("Consturctor test") {

    REQUIRE(a.min().x == Approx(0.0f));
    REQUIRE(a.min().y == Approx(0.0f));
    REQUIRE(a.max().x == Approx(0.0f));
    REQUIRE(a.max().y == Approx(0.0f));

    REQUIRE(b.min().x == Approx(1.0f));
    REQUIRE(b.min().y == Approx(1.0f));
    REQUIRE(b.max().x == Approx(2.0f));
    REQUIRE(b.max().y == Approx(2.0f));
  }

  SECTION("Circumference test") {
    REQUIRE(a.circumference() == Approx(0.0f));
    REQUIRE(b.circumference() == Approx(4.0f));
  }
}

TEST_CASE("Test cases for Circle") {
  Circle a{};
  Circle b{ { 1.0,1.0 },5.0, {1.0} };

  SECTION("Consturctor test") {
    REQUIRE(a.center().x == Approx(0.0f));
    REQUIRE(a.center().y == Approx(0.0f));
    REQUIRE(a.radius() == Approx(0.0f));

    REQUIRE(b.center().x == Approx(1.0f));
    REQUIRE(b.center().y == Approx(1.0f));
    REQUIRE(b.radius() == Approx(5.0f));
  }

  SECTION("Circumference test") {
    REQUIRE(a.circumference() == Approx(0.0f));
    REQUIRE(b.circumference() == Approx(31.4159f));
  }

  SECTION("Is_inside test") {
    REQUIRE(!a.is_inside({ 1.0f,0.0f }));
    REQUIRE(b.is_inside({ 0.0f,0.0f }));
  }
}