#include "string.h"
#include <cstring>
#include <cassert>

String::String() 
: str_(new char[1]), len_(0) 
{
    assert(str_ );
    str_[0] = '\0';
    
}

String::String(const char *s) 
: str_(new char[strlen(s)] + 1), len_(strlen(s)) 
{
    assert(str_ );
    strcpy(str_, s);

}

String::String(const String& rhs)
: str_(new char[rhs.len_ + 1]), len_(rhs.len_)
{
    assert(str_ );
    strcpy(str_, rhs.str_);

}

String::~String() {
    delete [] str_;
}