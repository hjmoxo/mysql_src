#include <iostream>
#include <string>
#include <ios>
#include <iomanip>
#include <vector>       // vector 상용
#include <algorithm>    // sort 사용 
#include <stdexcept>    // throw 예외 처리 
#include <numeric>

std::istream& read_hw(std::istream& in, std::vector<double>& homeworks);

struct Student_info {
    std::string name;
    double midterm;
    double finalterm;
    std::vector<double> homworks;
};

std::istream& read(std::istream& in, Student_info& s) 
{
    std::cin >> s.name >> s.midterm >> s.finalterm;
    read_hw(in, s.homworks);

    return in;
}

std::istream& read_hw(std::istream& in, std::vector<double>& homeworks) {  

    if (in) {
        homeworks.clear();

        double homework;
        while(in >> homework) {
            homeworks.push_back(homework);
        }

        in.clear();
    }

    return in;
}

double median(const std::vector<double>& vec) {
    
    std::vector<double> vec2 = vec;
    std::sort(vec2.begin(), vec2.end());

    const std::vector<double>::size_type mid = vec2.size() / 2;

    double median;
    if(vec2.size() % 2 != 0) {
        median = vec2[mid];
    } else {
        median = (vec2[mid] + vec2[mid-1]) / 2;
    }

    return median;

}

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

        // if(maxlen < s.name.size()) {
        //     maxlen = s.name.size();
        // }
        maxlen = std::max(maxlen, s.name.size());
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