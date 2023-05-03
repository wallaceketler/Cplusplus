#include <iostream>
using namespace std;

int main(int argc, char** argv){

    //x é l-value: local de memória que guarda r-value.
    int x = 0;  //uma variável qualquer x -> 0
    int& a = x; // a -> 0, pois se refere ao x
    int*p = &x; // p -> 0xEndereço de x

    return 0;
}