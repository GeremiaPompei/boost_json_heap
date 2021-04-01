#ifndef VALUE_H
#define VALUE_H

#include <iostream>
#include "comparator.hpp"

using namespace std;

/**
 * Classe utile a costruire oggetti composti da un id e un nome.
 */
class Value : public Comparator {
    private :
        /**
         * Id del Value.
         */
        int _id;
        /**
         * Nome del Value.
         */
        string _name;
    
    public:
        /**
         * Costruttore di default.
         */
        Value();
        /**
         * Costruttore che inizializza gli attributi id e nome.
         */
        Value(int id, string name);
        /**
         * Getter dell'id.
         */
        int id() const;
        /**
         * Getter del nome.
         */
        string name() const;
        /**
         * Metodo utile per il confronto tra due Value.
         */
        bool operator() (const Value &v1,const Value &v2) const;
};

#endif
