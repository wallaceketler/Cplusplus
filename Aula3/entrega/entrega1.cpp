#include "entrega1.hpp"
using namespace std;

int main(){

    //defino o tipo que eu quero
    Lista<std::string> l;


    l.inserir("pos0");
    l.inserir("pos1");
    l.inserir("pos2");

    l.mostrar();

    cout<<"-------------------------------"<<endl;

    l.inserir_pos("MEIO", 5);

    l.mostrar();
    cout<<l.verificaTamanho()<<endl;

    l.remover_pos(2);

    l.mostrar();
    
    cout<<l.verificaTamanho()<<endl;

    return 0;
}