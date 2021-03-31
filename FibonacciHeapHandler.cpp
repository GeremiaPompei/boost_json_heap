#include <iostream>
#include <vector>
#include <boost/pending/fibonacci_heap.hpp>
#include <boost/pending/indirect_cmp.hpp>

using namespace std;
using namespace boost;

class FibonacciHeapHandler {
    public:
        void heapsort(vector<string> *in) 
        {
            vector<string> out;
            int i;
            const int N = in->size();
            typedef indirect_cmp<string*,less<string>> ICmp;
            ICmp cmp(&(*in)[0], less<string>());
            fibonacci_heap<int, ICmp> Q(N, cmp);
            for (i = 0; i < N; ++i) 
                Q.push(i);
            for (i = 0; i < N; ++i) {
                out.push_back((*in)[Q.top()]);
                Q.pop();
            }
            *in = out;
        }
};
