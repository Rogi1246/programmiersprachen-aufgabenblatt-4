#ifndef MAT2_CPP
#define MAT2_CPP

#include "mat2.hpp"
#include "vec2.hpp"
#include <math.h>

Mat2::Mat2() : firstRow_(Vec2{1.0f, 0.0f}), secondRow_(Vec2{0.0f, 1.0f}){};

Mat2::Mat2(Vec2 const& firstRow, Vec2 const& secondRow): firstRow_(firstRow), secondRow_(secondRow) {};

Mat2& Mat2::operator*=(Mat2 const& m) {
    Vec2 newFirstRow_ = { firstRow_.x * m.firstRow_.x + secondRow_.x * m.firstRow_.y, firstRow_.y * m.firstRow_.x + secondRow_.y * m.firstRow_.y};
    Vec2 newSecondRow_ = {firstRow_.x * m.secondRow_.x + secondRow_.x * m.secondRow_.y, firstRow_.y * m.secondRow_.x + secondRow_.y * m.secondRow_.y};
    firstRow_ = newFirstRow_;
    secondRow_ = newSecondRow_;
    return *this;
};

float Mat2::det() const {
    return firstRow_.x * secondRow_.y - firstRow_.y * secondRow_.x;

}

Mat2 inverse(Mat2 const& m){
    float a = m.firstRow_.x * m.secondRow_.y - m.secondRow_.x * m.firstRow_.y;


}