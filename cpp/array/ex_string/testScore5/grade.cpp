#include <vector>
#include <stdexcept>

#include "student_info.h" 
#include "grade.h"
#include "median.h"

double grade(double midterm, double finalterm, double homework) {
    return  0.2 * midterm +0.4 * finalterm+0.4 * homework;
}

double grade(double midterm, double finalterm, const std::vector<double>& homeworks) {

    if(homeworks.size() == 0) {
        throw std::domain_error("no homework");
    }

    double median = ::median(homeworks);
    return grade(midterm, finalterm, median);
}

double grade(const Student_info s) 
{
    return grade(s.midterm, s.finalterm, s.homworks);
}