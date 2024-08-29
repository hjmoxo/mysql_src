#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"

class Circle : public Shape {
private:
    int radius_;

public:
    Circle(int x, int y, int r);
    // virtual ~Circle() { } 안해도 자동으로 해줌 근데 가독성을 위해 

    virtual double area() const;
    double getCircumference() const;

};

#endif