#include <sstream>
#include <map>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "value.hpp"

using namespace std;
using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

class JsonHandler 
{   
private:
    const string _id = "id";
    const string _name = "name";
public:
    Value parser(string toParse);
    string stringify(Value toStringify);
};
