#include <iostream>
#include <vector>
#include <initializer_list>

class Matriz{

    public:

    Matriz(std::initializer_list< std::initializer_list<int> > il){ //inicializa um vetor temporário
        for(auto linha : il){

            this->m_.emplace_back(linha); //parecido com push_back()
            std::cout<< std::endl;
        
        }
       
    };

    std::vector< std::vector<int> > m_; //underline usado para falar que é atributo da classe
};

int main(){

    Matriz matriz{{1,2,3,4,5},{4,5,6,7,8}};
    return 0;
}