#include <iostream>
using namespace std;

//passagem por valor: não altera valor fora do escopo da função
void dobro(int x){
    x *= 2;
    cout<<x<<endl;
}


//passagem por referência: altera valor fora do escopo
void troca(int *a, int *b){
    int aux = *a;
    *a = *b;
    *b = aux;
}

//passagem por endereço: altera valor fora do escopo usando o endereço de memória
void imprime(int *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        cout<<vetor[i]<<endl;
    }
    cout<<endl;
}

//execução
int main(){

    //valor
    int valor = 5;
    dobro(valor);
    //referência
    int x = 5, y = 10;
    troca(&x,&y);
    //endereço
    int numeros[] = {1,2,3,4,5};
    int tamanho = sizeof(numeros)/sizeof(int);
    imprime(numeros, tamanho);

    return 0;
}