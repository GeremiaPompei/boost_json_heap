#include <iostream>
#include <vector>
#include <boost/heap/fibonacci_heap.hpp>
#include "value.hpp"

using namespace std;
using namespace boost::heap;

class FibonacciHeapHandler {
    public:
        void heapsort(vector<Value> *toSort);
};
