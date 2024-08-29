#include "shape.h"

Shape::Shape(int x, int y) 
: x_(x), y_(y)
{

}

void Shape::move(int offsetX, int offsetY) 
{
    x_ += offsetX;
    y_ += offsetY;
}

// double Shape::area() ??? X 여기선 못만들음 임의의 도형 