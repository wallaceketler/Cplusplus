#include "entrega1.hpp"

int main(){

    //defino o tipo que eu quero
    Lista<std::string> l;


    l.inserir("aa");
    l.inserir("t");
    l.inserir("asdas");

    l.mostrar();

    l.remover();
    l.remover();

    l.mostrar();    

    return 0;
}