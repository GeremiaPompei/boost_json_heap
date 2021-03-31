#include "fibonacci_heap_handler.hpp"

void FibonacciHeapHandler::heapsort(vector<Value> *toSort) 
{
    int i;
    const int N = toSort->size();
    fibonacci_heap<Value, compare<Value>> Q;
    for (i = 0; i < N; ++i) {
        Q.push((*toSort)[i]);
    }
    toSort->clear();
    for (i = 0; i < N; ++i) {
        toSort->push_back(Q.top());
        Q.pop();
    }
}
