#include "entrega.hpp"
using namespace std;

int main(int argc, char** argv){

    URL u = "https://pt.wikipedia.org:8080/wiki/URL#cite_note-4"_url;
    
    cout<<"PROTOCOLO: " << u.getProtoclo()<<endl;
    cout<<"DOMÍNIO: "<<u.getDominio()<<endl;
    cout<<"PORTA: "<<u.getPorta()<<endl;
    cout<<"CAMINHO: "<<u.getCaminho()<<endl;

   

    return 0;
}