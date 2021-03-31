#include "value.hpp"

/**
 * Costruttore di default.
 */
Value::Value()
{}

/**
 * Costruttore che inizializza gli attributi id e nome.
 */
Value::Value(int id, string name)
{
    _id = id;
    _name = name;
}

/**
 * Getter dell'id.
 */
int Value::id() const
{
    return _id;
}

/**
 * Getter del nome.
 */
string Value::name() const
{
    return _name;
}

/**
 * Operatore che permette di confrontare due oggetti Value.
 */
bool Value::operator() (const Value &v1,const Value &v2) const
{
    if(v1.id() != v2.id())
        return v1.id() > v2.id();
    return v1.name() > v2.name();
}
