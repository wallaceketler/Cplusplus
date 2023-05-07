#include "bigint.hpp"
using namespace std;

int main(){


    bigInt b1 = "1023"_bi;
    bigInt b2 = "24"_bi;
    bigInt resultado;
    cout<<"NÚMEROS INSERIDOS INICIALMENTE: "<<endl;
    cout << b1.getNumber() << endl;
    cout << b2.getNumber() << endl;

    resultado = b1*b2;

    cout<<"RESULTADO:"<<endl;
    cout << resultado.getNumber() << endl;

    

    return 0;
}