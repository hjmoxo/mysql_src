#ifndef STUDENT_INFO_H
#define STUDENT_INFO_H
#include <iostream>
#include <vector>
#include <string>

struct Student_info {
    std::string name;
    double midterm;
    double finalterm;
    std::vector<double> homworks;
};

std::istream& read(std::istream& in, Student_info& s);

#endif