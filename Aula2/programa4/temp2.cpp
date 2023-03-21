#include <iostream>

template <typename T>
class MinhaClasse{
    public:
        void imprimir(){
            std::cout << valor1_ << " " << valor2_ << std::endl;
        }



    private:
        T valor1_;
        T valor2_;

}


int main(){
    return 0;
}