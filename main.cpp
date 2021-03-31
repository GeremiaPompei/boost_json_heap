#include <iostream>
#include <vector>
#include "./FibonacciHeapHandler.cpp"
#include "./JsonHandler.cpp"

using namespace std;

int main()
{
    std::vector<std::string> w;
    
    cout << "Inserisci parole dando invio e termina attraverso il comando \"exit\"" << endl;
    char in[200] = "";
    while (string(in) != "exit") {
        cout << " > ";
        cin.getline(in, sizeof(in));
        w.push_back(in);
    }
    
    FibonacciHeapHandler fib;
    fib.heapsort(&w);
    
    for (int i = 0; i < w.size(); ++i) 
        cout << w[i] << "; ";
    cout << endl;
    
    JsonHandler json;
    json.example();
    
    cin >> in;
    return 0;
}
