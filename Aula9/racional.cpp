#include <iostream>
#include "racional.hpp"
using namespace std;

int main(){

    Racional r1(4,7);
    Racional r2(3,8);
    Racional resultado;
    bool resultadoComparacao;

    cout<<"Valores trabalhados:"<<endl;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;
    cout<<r2.numerador()<<"/"<<r2.denominador()<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Soma:"<<endl;

    resultado = r1+r2;
    cout<<resultado.numerador()<<"/"<<resultado.denominador()<<endl;

    cout<<"Comparação"<<endl;
    cout<<">"<<endl;
    resultadoComparacao = r1>r2;
    cout<<resultadoComparacao<<endl;

    cout<<"Incremento"<<endl;
    cout<<"++"<<endl;
    r1++;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;

    cout<<"Operação com atribuição"<<endl;
    cout<<"+="<<endl;
    r1 += r2;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;
    

    return 0;
}