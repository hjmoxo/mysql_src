#include <vector>
#include <string>
#include <vector>
#include <stdexcept>
#include <ios>
#include <iomanip>
#include <algorithm>
#include "student_info.h"
#include "grade.h"
#include "median.h" 

std::istream& read_hw(std::istream& in, std::vector<double>& homeworks);

bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name < s2.name;
}

template <typename T>T max(const T& a, const T& b)
{
    return (a>b) ? a: b;
}

int main() {

    std::vector<Student_info> students;
    
    int maxlen = 0;
    Student_info s;
    while(read(std::cin, s)) {
        students.push_back(s);

        if(maxlen < s.name.size()) {
            maxlen = s.name.size();
        }
        //maxlen = std::max(maxlen, s.name.size());
    }

    std::sort(students.begin(), students.end(), compare);

    try{

        for(std::vector<Student_info>::size_type i = 0; i != students.size(); ++i) {

            const double finalScore = grade(students[i]);

            std::streamsize prec = std::cout.precision();
            std::cout << students[i].name << " : " << std::string(maxlen - students[i].name.size() + 1,' ' )
                        << std::setprecision(3) << finalScore
                        << std::setprecision(prec) << std::endl;

        }
    
    } catch (const std::domain_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }

    return 0;
}