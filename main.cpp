#include <iostream>
#include <vector>
#include "fibonacci_heap_handler.hpp"
#include "json_handler.hpp"
#include "value.hpp"

using namespace std;
    
int main()
{
    JsonHandler json;
    FibonacciHeapHandler fib;
    vector<Value> w;
    cout << "Inserisci parole dando invio e termina attraverso il comando \"exit\"" << endl;
    char in[200] = "";
    while (true) {
        cout << " > ";
        cin.getline(in, sizeof(in));
        string s = string(in);
        try {
            Value v = json.parser(s);
            w.push_back(v);
            fib.heapsort(&w);
            for (int i = 0; i < w.size(); ++i) 
                cout << json.stringify(w[i]) << endl;
        }__catch(exception e) {
            cout << "Error: " << e.what() << endl;
        }
    }
    return 0;
}
