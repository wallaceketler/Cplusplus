#include <iostream>
#include <string>

//templates são úteis para termos uma programação genérica
template <typename T>

void troca(T &x, T &y){
    T aux = x;
    x = y;
    y = aux;
}

//na criação de template, usar typename ou name dá na mesma
template <class X, class Y>

X soma(X a, Y b){
    X res = a + b;
    std::cout<<res<<std::endl;
    return res;
}

template <class Z, class Comp>

void Ordenar(Z* dados, Comp comp){
    
}

int main(){

    int x = 10;
    int y = 20;
    double d = 20.0;
    std::string s = "teste";
    std::string z = "alo";


    troca(x,y);
    std::cout<<x<<" "<<y<<std::endl;
    soma(z, s);
    soma(d,x);

    return 0;
}