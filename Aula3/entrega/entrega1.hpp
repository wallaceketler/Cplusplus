#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Celula{
    private:
        T conteudo;
        Celula<T> *prox;

    public:

        Celula<T>(T conteudo){
            this->conteudo = conteudo;
            this->prox = NULL;
        }

        void setProx(Celula *p){
            prox = p;
        }

        Celula<T>* obterProx(){
            return prox;
        }

        T obterValor(){
            return conteudo;
        }
};

template <typename T>
class Lista{
    private:
        Celula<T> *cabeca;
        Celula<T> *cauda;

    public:
        //construtores
        Lista(){
            cabeca = NULL;
            cauda = NULL;
        }
        Lista(T v){
            cabeca = new Celula<T>(v);
            cauda = cabeca;
        }   

        bool vazia(){
            return(cabeca == NULL);
        }


        int verificaTamanho(){
            int tam = 0;

            if(vazia()){
                return 0;
            }

            Celula<T>* c = cabeca;

            //só posso usar assim quando c for um ponteiro
            while(c){
                c = c->obterProx();
                tam+=1;
            }
            
            return tam;
        }

        void inserir_pos(T v, int pos){

            Celula<T>* nova_celula = new Celula<T>(v);
            Celula<T>* atual = cabeca;

            int cont = 0;
            
            if(pos < 0 || pos >= this->verificaTamanho()){

                if(vazia()){
                    cabeca = nova_celula;
                    cauda = nova_celula;
                }else{
                     Celula<T>* nova_celula = new Celula<T>(v);
                     
                     cauda->setProx(nova_celula);
                     cauda = nova_celula;
                }
      
            }else{

                if(pos != 0){
                    //pega endereço que quero inserir
                    while(cont < pos -1){
                        atual = atual->obterProx();
                        cont++;  
                    }
                
                    nova_celula->setProx(atual->obterProx());
                    atual->setProx(nova_celula);
                }else{ //insere no início caso pos == 0
                    nova_celula->setProx(atual);
                    cabeca = nova_celula;
                }

            }
        }

        void remover_pos(int pos){

            if(pos < 0 || pos >= this->verificaTamanho() || vazia()){
                cout<<"posição inválida"<<endl;
            }else{

                Celula<T> *atual = cabeca;
                Celula<T> *aux_delete = nullptr;

                int cont = 0;

                if(pos != 0){
                    while(cont < pos - 1){
                        atual = atual->obterProx();
                        cont++;
                    }
                    aux_delete = atual->obterProx();
                    atual->setProx(atual->obterProx()->obterProx());

                    
                }else{

                    aux_delete = cabeca;
                    cabeca = cabeca->obterProx();

                }
                delete aux_delete;
            }
     
        }

        void buscar(int pos){

            if(pos < 0 || pos >= this->verificaTamanho() || vazia()){
                cout<<"Posição inválida"<<endl;
            }else{
                Celula<T>* atual = cabeca;
                int cont = 0;

                while(cont < pos){
                    atual = atual->obterProx();
                    cont++;
                }

                cout<<"Elemento da posição " << pos << ": "<< atual->obterValor() <<endl;
            }
        }

        void mostrar(){
            Celula<T>* c = cabeca;

            if(vazia()){
                cout<<"Lista vazia"<<endl;
            }else{
                //enquanto houver próximo de c, continua
                while(c){
                    cout<<c->obterValor()<<endl;
                    c = c->obterProx();
                }
            }
        }
};



