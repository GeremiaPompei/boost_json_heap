#ifndef VALUE_H
#define VALUE_H

#include <iostream>

using namespace std;

class Value {
    private :
        int _id;
        string _name;
    
    public:
        Value();
        Value(int id, string name);
        int id() const;
        string name() const;
        bool operator() (const Value &v1,const Value &v2) const;
};

#endif
