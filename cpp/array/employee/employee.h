#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "string.h"

class Employee {
friend std::ostream& operator<<(std::ostream& out, const Employee& rhs);
private:
    int id_;
    String name_;
    const Employee *pManager_;

    Employee(const Employee& rhs); //사용 안할거는 private로 옮기면 사용 X
    Employee& operator=(const Employee& rhs); // is not use

public:
    Employee(int id, String name, const Employee *p); //디폴트 생성자 Employee( ) { };

    // ~Employee();

    //Employee* operator&() { return this; }
    //const Employee* operator&() const { return this; }

    int getId() const;
    String getName() const;
    const Employee *getPManager() const;

 
};

#endif 