#include <iostream>
#include <vector>
#include <climits>

class Funcs{

    public:

    int soma(std::initializer_list<int> l){
        
        int s;
        for(auto valor: l){
            s = s + valor;
        }

        return s;
    }

    int maximo(std::initializer_list<int> l){

        int max = INT_MIN;
        for(auto valor: l){
            if(valor >= max){
                max = valor;
            }
        }

        return max;
    }

    int minimo(std::initializer_list<int> l){

        int min = INT_MAX;
        for(auto valor: l){
            if(valor <= min){
                min = valor;
            }
        }

        return min;
    }

};


int main(){

    Funcs f{};

    std::cout << f.soma({1,2,3}) << std::endl;
    std::cout << f.maximo({1,2,3}) << std::endl;
    std::cout << f.minimo({1,2,3}) << std::endl;

    return 0;

}