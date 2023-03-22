#include "entrega1.hpp"
using namespace std;

int main(){

    //defino o tipo que eu quero
    Lista<std::string> l;

    cout<<"Primeiras inserções"<<endl;
    l.inserir_pos("pos0",0);
    l.inserir_pos("pos1",1);
    l.inserir_pos("pos2",2);

    l.mostrar();

    cout<<"-------------------------------"<<endl;

    cout<<"Inserindo no meio dos inseridos previamente"<<endl;

    l.inserir_pos("INSERE NO MEIO", 1);

    l.mostrar();

    cout<<"-------------------------------"<<endl;

    cout<<"Removendo certa posição"<<endl;

    l.remover_pos(3);


    l.mostrar();

    cout<<"-------------------------------"<<endl;
    
    cout<<"Buscando certa posição"<<endl;

    l.buscar(1);

    return 0;
}