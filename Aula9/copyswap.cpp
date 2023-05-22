#include <iostream>
using namespace std;

template <class T>
class CopySwap{
    public:

    void swap(T&a, T&b){
        T tmp(a);
        a = b;
        b = tmp;
    }
    
};