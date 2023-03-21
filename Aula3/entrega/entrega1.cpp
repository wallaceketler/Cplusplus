#include "entrega1.hpp"

int main(){

    //defino o tipo que eu quero
    Lista<std::string> l;


    l.inserir("pos0");
    l.inserir("pos1");
    l.inserir("pos2");

    std::cout<<"tamanho: "<< l.verificaTamanho()<<std::endl;

    l.mostrar();

    l.remover();
    l.remover();

    std::cout<<"tamanho: "<<l.verificaTamanho()<<std::endl;

    l.mostrar();    

    return 0;
}