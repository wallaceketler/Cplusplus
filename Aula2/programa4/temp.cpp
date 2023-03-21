#include <iostream>

template <typename T>

T soma(T a, T b, T c){
    T valor = 0;
    valor += a + b + c;
    return valor;
}

int main(){
    double x = soma(3.14, 4.7, 3.2);
    int y = soma(3,4,5);
    std::cout << x << std::endl;
    std::cout << y << std::endl;
    return 0;
}