#include <boost/config.hpp>
#include <iostream>
#include <vector>
#include <boost/graph/random.hpp>
#include <boost/random/mersenne_twister.hpp>
#include <algorithm>
#include <boost/pending/fibonacci_heap.hpp>
#include <boost/graph/graph_utility.hpp>
#include <boost/pending/indirect_cmp.hpp>

using namespace std;
using namespace boost;

vector<string> heapsort(vector<string> in) 
{
    vector<string> out;
    int i;
    const int N = in.size();
    typedef indirect_cmp<string*,less<string>> ICmp;
    ICmp cmp(&in[0], less<string>());
    fibonacci_heap<int, ICmp> Q(N, cmp);
    for (i = 0; i < N; ++i) 
        Q.push(i);
    for (i = 0; i < N; ++i) {
        out.push_back(in[Q.top()]);
        Q.pop();
    }
    return out;
}

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
    
    w = heapsort(w);
    
    for (int i = 0; i < w.size(); ++i) 
        cout << w[i] << "; ";
    cout << endl;
    
    cin >> in;
    return 0;
}
