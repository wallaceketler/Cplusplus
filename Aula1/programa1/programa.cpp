#include <iostream>

int main(int argc, char** argv){

    std::cout << "Olá, mundo!" <<std::endl;

    return 0; 
}

//formas de compilação
//g++ -E -P -o saida.ii programa.cpp
//g++ -S -o saida.s programa.cpp
//g++ -c -o programa.o programa.cpp
