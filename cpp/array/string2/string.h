#ifndef STRGIN_H
#define STRING_H
#include <iostream>
#include "stringRep.h"

class String {
friend std::ostream& operator<<(std::ostream& out, const String& rhs);

private:
    //char *str_;
    //int len_;
    StringRep *ptr_;

public:
    String();
    String(const char *s);
    String(const String& rhs);
    ~String();
    
    // String* operator&() { return this; }
    // const String* opeartor&() { return this; }
    
    String& operator=(const String& rhs); 

    bool operator== (const String& rhs) const;

    const String operator+ (const String& rhs) const;

    const char *c_str() const;
    int length() const;

};

#endif