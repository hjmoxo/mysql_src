#include <iostream>
#include <string>
#include <list>
#include <stdexcept>
#include <algorithm>
#include <ios>
#include <iomanip>
#include <fstream>
#include "student_info.h"
#include "grade.h"

bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}

std::list<Student_info> extract_fails(std::list<Student_info>& passes)
{
    std::list<Student_info> fails;
    
    for(std::list<Student_info>::iterator it = passes.begin(); it !=  passes.end(); ) {
        if(fgrade(*it)) {
            fails.push_back(*it);
            it = passes.erase(it);
        } else {
            ++it;
        }
    }

    return fails;
}


bool compare(const Student_info& s1, const Student_info& s2)
{
    return s1.name < s2.name;
}

int main()
{
    std::list<Student_info> students;

    //int maxLen = 0;
    std::string::size_type maxLen = 0;

    std::ifstream in("../score.dat");
    
    Student_info s;
    while (read(std::cin, s)) {
        students.push_back(s);
    
        maxLen = std::max(maxLen, s.name.size());
    }

    // sort는 순차배열로 되어있어야 사용 가능 list는 자체적인 sort함수가 있음 
    // std::sort(students.begin(), students.end(), compare);
    students.sort(compare);

    std::list<Student_info> passes, fails;
    passes = students;
    fails = extract_fails(passes);

    try {
        std::cout << "pass list : " << std::endl;
        for (std::list<Student_info>::const_iterator it = passes.cbegin(); it != passes.cend(); ++it) { 
            const double finalScore = grade(*it);

            std::streamsize prec = std::cout.precision();
            std::cout << it->name 
                << std::string(maxLen - it->name.size() + 1, ' ')            
                << std::setprecision(3) << finalScore  
                << std::setprecision(prec) << std::endl;
        }
        std::cout << "fail list : " << std::endl;
        for (std::list<Student_info>::const_iterator it = fails.cbegin(); it != fails.cend(); ++it) { 
            const double finalScore = grade(*it);

            std::streamsize prec = std::cout.precision();
            std::cout << it->name 
                << std::string(maxLen - it->name.size() + 1, ' ')            
                << std::setprecision(3) << finalScore  
                << std::setprecision(prec) << std::endl;
        }
    } catch (const std::domain_error& e) {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    return 0;
}