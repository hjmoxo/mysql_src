#ifndef SHAPE_H
#define SHAPE_H

// ABC(Avstract Base Class) 순수 가상클래스를 가지면 가지면 라고 불림 (추상 클래스)
class Shape { 
//private:
protected:
    int x_;
    int y_;

public:
    Shape(int x, int y);
    // Shape(const Shape& rhs)
    virtual ~Shape() { } // 이러면 cpp 에서 구현 안해도 됨! + ; 안붙여도 됨 

    // Shape& operator=(const Shape& rhs)
    // Shape *operator&()
    // const Shape *operator&() const;

    void move(int offsetX, int offsetY);
    virtual double area() const  = 0;    // ??? can't is implemented
    // virtual: 나는 구현 못하지만 나를 상속받는 자식들은 얘를 구현가능함! 나는 못한다는 의미로 =0

};

#endif