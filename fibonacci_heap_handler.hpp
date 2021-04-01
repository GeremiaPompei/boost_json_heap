#include <iostream>
#include <vector>
#include <boost/heap/fibonacci_heap.hpp>
#include "value.hpp"

using namespace std;
using namespace boost::heap;

/**
 * Classe utile a fornire oggetti capaci di gestire un parametro di tipo T in un heap di fibonacci.
 */
template<typename T> 
class FibonacciHeapHandler {
    public:
        /**
         * Algoritmo capace di riordinare un vettore.
         */
        template<typename C, typename = std::enable_if<std::is_base_of<Comparator, C>::value>>
        void heapsort(vector<T> *toSort) {
            int i;
            const int N = toSort->size();
            fibonacci_heap<T, compare<C>> Q;
            for (i = 0; i < N; ++i) {
                Q.push((*toSort)[i]);
            }
            toSort->clear();
            for (i = 0; i < N; ++i) {
                toSort->push_back(Q.top());
                Q.pop();
            }
        }
};
