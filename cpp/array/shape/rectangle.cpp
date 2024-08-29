#include "rectangle.h"
#include <cmath>

Rectangle::Rectangle(int x, int y, int w, int h) 
: Shape(x, y), width_(w), height_(h)
{

}

double Rectangle::area() const
{
    return width_ * height_;
}

double Rectangle::getDiagoonal() const
{
    return sqrt(width_ * width_ + height_ * height_); //피타고라스의 정리 qurt는 루트 그거그거 
}

