#define CATCH_CONFIG_RUNNER
#define _USE_MATH_DEFINES
#include <catch.hpp>
#include "vec2.hpp"

int main(int argc, char *argv[])
{
  return Catch::Session().run(argc, argv);
}

TEST_CASE("Test cases for Vec2") {
  Vec2 a = Vec2{};
  Vec2 b = Vec2{5.0f, 2.0f};
  Vec2 c = Vec2{2.0f, 1.0f};

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
}
