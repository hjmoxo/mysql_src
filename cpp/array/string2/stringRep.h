#ifndef STRING_REP_H
#define STRING_REP_H

class StringRep {
friend class String;    // 이렇게 하면 String은 private 에 접근 가능해짐
private:
    char *str_;
    int len_;
    int rc_;     // refernce count

    StringRep();
    StringRep(const char *s);
    StringRep(const StringRep& rhs);
    ~StringRep();

};

#endif 