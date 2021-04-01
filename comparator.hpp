/**
 * Interfaccia utile alla classe FibonacciHeapHandler per comparare due elementi.
 */
class Comparator {
    public:
        /**
         * Metodo utile per il confronto tra due valori.
         */
        template<typename T>
        bool operator() (const T &v1,const T &v2) const;
};
