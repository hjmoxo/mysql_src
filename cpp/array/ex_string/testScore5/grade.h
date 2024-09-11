#ifndef GRADE_H
#define GRADE_H

#include <vector>
#include "student_info.h"

double grade(double midterm, double finalterm, double homework);
double grade(double midterm, double finalterm, const std::vector<double>& homeworks);
double grade(const Student_info s); 

#endif