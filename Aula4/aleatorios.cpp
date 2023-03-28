#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main(int argc, char** argv){

    time_t t = time(0);

    int quantidade_gerada = 0;
    double valor_minimo = 0;
    double valor_maximo = 0;
    int casas_decimais = 0;
    int semente = t; 

    /*
        srand(100);
        int r = rand()%100;
        cout<<r<<endl;
        return 0;
    */

    for(int i = 0; i < argc; i++){
        if(argv[i] == "-i"){
            
        }
        //para comparar, usar strcmp()
        if(argv[i] == "-n"){
            quantidade_gerada = atoi(argv[i+1]);
            cout<<argv[i]<<endl;
            cout<<quantidade_gerada<<endl;
        }
        if(argv[i] == "-p"){
            casas_decimais = atoi(argv[i+1]);
            cout<<casas_decimais<<endl;
        }
        if(argv[i] == "-r"){
            valor_minimo = atoi(argv[i+1]);
            valor_maximo = atoi(argv[i+2]);
            cout<<valor_minimo<<" "<<valor_maximo<<endl;
        }
        if(argv[i] == "-s"){
            semente = atoi(argv[i+1]);
            cout<<semente<<endl;      
        }
    }
}

//I+R*(S-I) com I menor valor e S maior valor