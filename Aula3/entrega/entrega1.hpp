#include <iostream>
#include <string>

template <typename T>
class Celula{
    private:
        T conteudo;
        Celula<T> *prox;

    public:

        //construtor
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

        void inserir(T v){
            Celula<T>* nova_celula = new Celula<T>(v);
            
            if(vazia()){
                cabeca = nova_celula;
                cauda = nova_celula;
            }else{
                cauda->setProx(nova_celula);
                cauda = nova_celula;
            }
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
            


            /*
            int atual = 0;

            Celula<T>* c = cabeca;
            if(pos + 1 > this->verificaTamanho() || pos < 0){
                std::cout<<"Posição inválida"<<std::endl;
            }else{
                Celula<T>* nova_celula = new Celula<T>(v);
                while(atual != pos){
                    c = c->obterProx();
                    atual+=1;
                }
                
            }
            */
        }

        void remover(){
            if(!vazia()){
                if(cabeca->obterProx() == NULL){
                    cabeca = NULL;
                }
                else if(cabeca->obterProx()->obterProx() == NULL){
                    cabeca->setProx(NULL);
                }
                else{

                    Celula<T>* ant_ant = cabeca;
                    Celula<T>* ant = cabeca->obterProx();
                    Celula<T>* corrente = cabeca->obterProx()->obterProx();

                    while(corrente){
                        Celula<T>* aux = ant;
                        ant = corrente;
                        ant_ant = aux;
                        corrente = corrente->obterProx();
                    }

                    delete ant_ant->obterProx();
                    ant_ant->setProx(NULL);
                    cauda = ant_ant;
                }
            }
        }

        void mostrar(){
            Celula<T>* c = cabeca;

            if(vazia()){
                std::cout<<"Lista vazia"<<std::endl;
            }else{
                //enquanto houver próximo de c, continua
                while(c){
                    std::cout<<c->obterValor()<<std::endl;
                    c = c->obterProx();
                }
            }
        }

};



