#include <iostream>
#include "shape.h"
#include "rectangle.h"
#include "circle.h"
#include <typeinfo>

void printShape(const Shape *ps) 
{
    if(typeid(*ps) == typeid(Rectangle)) {
        // RTTI(RunTime Type Identification)
        std::cout << "retanglel area: " << ps->area() << ", "; 
        Rectangle *pr = (Rectangle *)ps; //다시 포인트로 어쩌구저쩌
        std::cout << "diagonal: " << pr->getDiagoonal() << std::endl;
    } else if (typeid(*ps) == typeid(Circle)) {
        std::cout << "circle area: " << ps->area() << ", ";
        Circle *pc = (Circle *)ps;
        std::cout << "circumference: " << pc->getCircumference() << std::endl;
    }
}

int main() {

    // Shape s(100, 100); 추상 클래스의 객체 타입은 못만들음 X
    // Shape *pc;  포인트는 또 됨 O  

    Shape *pShapes[5];
    pShapes[0] = new Rectangle(100, 100, 10, 5); // 추상 클래스는 인자로 사용 일케 사용해야함
    pShapes[1] = new Circle(10, 10, 10);
    pShapes[2] = new Rectangle(50, 50, 50, 50);
    pShapes[3] = new Rectangle(200, 200, 50, 10);
    pShapes[4] = new Circle(20, 20, 5);

    for(int i=0; i<5; ++i) {
        printShape(pShapes[i]);
    }

    for(int i=0; i<5; ++i) {
        delete pShapes[i];
    }

    return 0;
}