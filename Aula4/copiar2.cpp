#include <iostream>
#include <fstream>
using namespace std;

//programa que pega parâmetro em execução e faz cópia do arquivo com esse nome
int main(int argc, char** argv){

    string value = "";

    //lê o arquivo e coloca em value
    ifstream file(argv[1]);
    if(file.is_open()){
        getline(file,value);
    }

    //cria arquivo
    ofstream copia;
    copia.open("copia.txt");
    copia << value << endl;
    copia.close();

    cout<<value<<endl;
    return 0;
}