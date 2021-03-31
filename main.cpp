#include <iostream>
#include <vector>
#include "fibonacci_heap_handler.hpp"
#include "json_handler.hpp"
#include "value.hpp"

using namespace std;

 /**
  * Funzione main che fa partire l'esecuzione del programma.
  */
int main()
{
    JsonHandler json;
    FibonacciHeapHandler<Value> fib;
    vector<Value> w;
    cout << "Inserisci valori json con tale forma: {\"id\": 1, \"name\": \"value1\"}." << endl;
    cout << "Digita exit per uscire." << endl;
    char in[200] = "";
    while (true) {
        cout << " > ";
        cin.getline(in, sizeof(in));
        string s = string(in);
        if(s == "exit") break;
        try {
            Value v = json.parser(s);
            w.push_back(v);
            fib.heapsort(&w);
            for (int i = 0; i < w.size(); ++i) 
                cout << json.stringify(w[i]);
            cout << endl;
        }__catch(exception e) {
            cout << "Error: " << e.what() << endl;
        }
    }
    return 0;
}
