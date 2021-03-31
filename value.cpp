#include "value.hpp"

Value::Value()
{}
  
Value::Value(int id, string name)
{
    _id = id;
    _name = name;
}
        
int Value::id() const
{
    return _id;
}

string Value::name() const
{
    return _name;
}

bool Value::operator() (const Value &v1,const Value &v2) const
{
    return v1.id() > v2.id();
}
