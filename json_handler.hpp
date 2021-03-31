#include <sstream>
#include <map>
#include <boost/property_tree/ptree.hpp>
#include <boost/property_tree/json_parser.hpp>
#include "value.hpp"

using namespace std;
using boost::property_tree::ptree;
using boost::property_tree::read_json;
using boost::property_tree::write_json;

/**
 * Classe utile a fornire oggetti per serializzare e deserializzare  oggetti Value.
 */
class JsonHandler 
{   
private:
    /**
     * Chiave relativa alla memorizzazione dell'id.
     */
    const string _id = "id";
    /**
     * Chiave relativa alla memorizzazione del nome.
     */
    const string _name = "name";
public:
    /**
     * Deserializzatore da stringa json ad oggetto Value.
     */
    Value parser(string toParse);
    /**
     * Serializzatore da oggetto Value a stringa json.
     */
    string stringify(Value toStringify);
};
