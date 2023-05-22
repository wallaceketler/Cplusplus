#include <iostream>
#include "racional.hpp"
#include <vector>
#include <algorithm>
using namespace std;

int main(){

    Racional r1(4,7);
    Racional r2(3,8);
    Racional r3(11,5);
    Racional r4(2,7);
    Racional r5(5,9);
    Racional resultado;
    bool resultadoComparacao;
    
    cout<<"Valores trabalhados:"<<endl;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;
    cout<<r2.numerador()<<"/"<<r2.denominador()<<endl;
    cout<<r3.numerador()<<"/"<<r3.denominador()<<endl;
    cout<<r4.numerador()<<"/"<<r4.denominador()<<endl;
    cout<<r5.numerador()<<"/"<<r5.denominador()<<endl;
    cout<<"--------------------------------"<<endl;
    cout<<"Soma dos dois primeiros:"<<endl;
    
    resultado = r1+r2;
    cout<<resultado.numerador()<<"/"<<resultado.denominador()<<endl;
    
    cout<<"--------------------------------"<<endl;

    cout<<"Comparação entre os dois primeiros"<<endl;
    cout<<">"<<endl;
    resultadoComparacao = r1>r2;
    cout<<resultadoComparacao<<endl;

    cout<<"<"<<endl;
    resultadoComparacao = r1<r2;
    cout<<resultadoComparacao<<endl;

    cout<<"<="<<endl;
    resultadoComparacao = r1<=r2;
    cout<<resultadoComparacao<<endl;

    cout<<">="<<endl;
    resultadoComparacao = r1>=r2;
    cout<<resultadoComparacao<<endl;



    cout<<"--------------------------------"<<endl;


    cout<<"Incremento do primeiro"<<endl;
    cout<<"++"<<endl;
    r1++;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;

    cout<<"--------------------------------"<<endl;


    cout<<"Operação com atribuição entre os dois primeiros"<<endl;
    cout<<"+="<<endl;
    r1 += r2;
    cout<<r1.numerador()<<"/"<<r1.denominador()<<endl;
    

    cout<<"--------------------------------"<<endl;

    
    vector<Racional> v{r2,r3,r4,r5};
    cout<<"Ordenação com todos, menos r1"<<endl;
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout<<v[i].numerador()<<"/"<<v[i].denominador()<<endl;
    }

    cout<<"--------------------------------"<<endl;


    cout<<"Somatório com todos, menos r1"<<endl;
    Racional somatorio;
    for(int i = 0; i < v.size(); i++){
        somatorio += v[i];
    }
    cout<<somatorio.numerador()<<"/"<<somatorio.denominador()<<endl;

    cout<<"--------------------------------"<<endl;

    
    return 0;
}