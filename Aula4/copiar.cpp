#include <iostream>
using namespace std;

//esses argumentos devem ser passados na execução depois do ./
int main(int argc, char** argv){

    for(int i = 0; i < argc; i++){
        cout<<argv[i]<<endl;
    }
    
    return 0;
}