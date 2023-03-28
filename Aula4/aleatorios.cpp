#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <math.h>
#include <iomanip>
using namespace std;

int main(int argc, char** argv){

    time_t t = time(NULL);

    int quantidade_gerada = 1;
    int valor_minimo = 0;
    int valor_maximo = 1;
    int casas_decimais = 4;
    int semente = t; 
    bool inteiro = false;
    
    //realiza leitura e tratamento dos parâmetros de execução
    for(int i = 0; i < argc; i++){
        if(strcmp(argv[i], "-i") == 0){
            inteiro = true;
        }
        //para comparar, usar strcmp()
        if(strcmp(argv[i], "-n") == 0){
            quantidade_gerada = atoi(argv[i+1]);
        }
        if(strcmp(argv[i],"-p") == 0){
            casas_decimais = atoi(argv[i+1]);
        }
        if(strcmp(argv[i],"-r") == 0){
            valor_minimo = atoi(argv[i+1]);
            valor_maximo = atoi(argv[i+2]);
        }
        if(strcmp(argv[i],"-s") == 0){
            semente = atoi(argv[i+1]);
        }
    }
    //realiza resultado
    int mult_decimais = pow(10,casas_decimais);
    int limite = ((valor_maximo-valor_minimo) * mult_decimais);
    cout<<limite<<endl;

    srand(semente);
    for(int i = 0; i < quantidade_gerada; i++){
        float r = rand()%(limite);
        r = r/mult_decimais + valor_minimo;
        if(inteiro){
            r = int(r);
        }
        cout<<fixed<<setprecision(casas_decimais);
        cout<<r<<endl;
    }

    //[X] Quantidade
    //[X] Seed
    //[X] Casas decimais
    //[X] Apenas inteiros
    //[X] Máximo e Mínimo
}

