#include <iostream>
#include <csignal>
#include <string>
using namespace std;

int contaC = 0;

void handler(int sig){

    contaC++;
    if(contaC == 1)
        cout<<"APERTE CTRL+ C NOVAMENTE PARA ENCERRAR"<<contaC<<endl;

    if(contaC == 2){
        exit(EXIT_SUCCESS);
    }
}

int main(int argc, char** argv){

    //funciona como uma sobrecarga do ^C (ctrl C), não é paralelo
    std::signal(SIGINT, handler);

    while(true){
    
    }
    
    return 0;
}