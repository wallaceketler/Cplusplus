#include <iostream>
#include "racional.hpp"
using namespace std;

int main(){

    Racional r1(4,7);
    Racional r2(3,8);
    Racional resultado;

    resultado = r1+r2;
    cout<<resultado.numerador()<<"/"<<resultado.denominador()<<endl;
    cout<<resultado.valor()<<endl;

    return 0;
}