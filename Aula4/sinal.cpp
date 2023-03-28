#include <iostream>
#include <csignal>
#include <cstdlib> //para usar exit()
using namespace std;


void handler(int sig){
    cout << "Sinal capturado: " << sig << endl;
    exit(EXIT_SUCCESS);
}

int main(int argc, char** argv){

    std::signal(SIGTERM, handler);
    std::signal(SIGINT,handler);

    while(true){}

    return 0;
}