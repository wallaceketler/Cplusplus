#include "entrega1.hpp"
using namespace std;

int main(){

    //defino o tipo que eu quero
    Lista<std::string> l;


    l.inserir("pos0");
    l.inserir("pos1");
    l.inserir("pos2");

    l.buscar(1);

    //l.inserir_pos("inseriMeio", 1);

    std::cout<<"tamanho: "<< l.verificaTamanho()<<std::endl;
    cout<<endl;

    cout<<"MOSTRANDO:"<<endl;
    l.mostrar();

    l.remover();
    l.remover();

    std::cout<<"tamanho: "<<l.verificaTamanho()<<std::endl;

    l.mostrar();    

    return 0;
}