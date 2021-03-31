#include "json_handler.hpp"

Value JsonHandler::parser(string toParse)
{
    ptree pt;
    istringstream is(toParse);
    read_json(is, pt);
    int id = pt.get<int>(_id);
    string name = pt.get<string>(_name);
    return Value(id, name);
}

string JsonHandler::stringify(Value toStringify)
{
    ptree pt;
    pt.put(_id, toStringify.id());
    pt.put(_name, toStringify.name());
    ostringstream buf; 
    write_json (buf, pt, true);
    return buf.str();
}
