#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::string;


vector<string> vertical_cat(const vector<string>& v1, const vector<string>& v2)
{
    vector<string> result;
    result = v1;

    // for(auto it = v2.cbegin(); it != v2.cend(); ++it) {
    //     result.push_back(*it);
    // }

    result.insert(result.cend(), v2.cbegin(), v2.cend());

    return result;
}

string::size_type width(const vector<string>& v) 
{
    string::size_type maxlen = 0;
    for(vector<string>::const_iterator it = v.cbegin(); it != v.cend(); ++it) {
        maxlen = std::max(maxlen, it->size());
    }

    return maxlen;
}

// vector<string> horizontal_cat(const vector<string>& v1, const vector<string>& v2)
// {
//     vector<string> result;

//     string::size_type width1 = width(v1);
    
//     int i=0, j=0;
//     while(i != v1.size() || j != v2.size()) {
//         string s;

//         if (i != v1.size()) {
//             s = v1[i];
//             ++i;
//         }

//         s = s + string(width1 - s.size() + 1, ' '); 

//         if ( j != v2.size()) {
//             s = s + v2[j];
//             ++j;
//         }

//         result.push_back(s);
//     }

// }

vector<string> horizontal_cat(const vector<string>& v1, const vector<string>& v2)
{
    vector<string> result;

    string::size_type width1 = width(v1);
    
    // int i, j;
    vector<string>::const_iterator it1 = v1.cbegin();
    auto it2 = v2.cbegin();
    while(it1 != v1.cend() || it2 != v2.cend()) {
        string s;
 
        if (it1 != v1.cend()) {
            s = *it1;
            ++it1;
        }

        s = s + string(width1 - s.size() + 1, ' '); 

        if ( it2 != v2.cend()) {
            s = s + *it2;
            ++it2;
        }

        result.push_back(s);
    }

}

vector<string> frame(const vector<string>& v)
{
    vector<string> result;

    string::size_type maxlen = width(v);
    string boarder(maxlen+4, '*');

    result.push_back(boarder);
    for(auto it = v.cbegin(); it != v.cend(); ++it) {
        string s = "* " + *it + string(maxlen - it->size(), ' ') + " *";
        result.push_back(s);
    }


    result.push_back(boarder);

    return result;
}

int main()
{
    vector<string> lines;
    lines.push_back("this is an");
    lines.push_back("example");
    lines.push_back("to");
    lines.push_back("illustrate");
    lines.push_back("framing");

    vector<string> result = frame(lines);

    for(auto it = result.cbegin(); it != result.cend(); ++it) {
        cout << *it << endl;
    }

    vector<string> result2 = vertical_cat(lines, result);
    for(auto it = result.cbegin(); it != result.cend(); ++it) {
        cout << *it << endl;
    }

    result2 = horizontal_cat(lines, result);
    for(auto it = result2.cbegin(); it != result2.cend(); ++it) {
        cout << *it << endl;
    }


    return 0;
}