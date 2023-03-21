#include <iostream>

//templates também podem ser usados para classes

template <typename T>
class Matriz{

    public:

        Matriz(int l, int c);
        ~Matriz();

        T& operator()(int l, int c);
    
    private:
         
        T** dados_;
        int nL_, nc_;

};

template <typename T>
Matriz<T>::Matriz(int e, int c): nl_(e), nc_(c){
    dados = new T*[e];
    for(int i = 0; i < nl_. ++i){
        dado[i] = new T[c];
    }
}

template <typename T>
Matriz<T>::~Matriz(){
    for(int i = 0; i < nl_; ++i){
        delete[] dados[i];
    }
    delete[] dados;
}

template <typename T>
T& Matriz<T>::operator()(int e, int c){
    return dados_[e][c];
}

int main(){

    return 0;
}