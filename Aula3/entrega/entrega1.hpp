#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Celula{
    public:
        T conteudo;
        Celula<T> *prox;

    //public:
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
            Celula<T>* atual = cabeca;

            int cont = 0;
            
            if(vazia()){
                cabeca = nova_celula;
                cauda = nova_celula;
            }else{
                
                //pega endereço que quero inserir
                while(cont < pos){
                    atual = atual->obterProx();
 
                    cont++;  
                }
                
                cout<< atual->conteudo <<endl;
                cout<<"SEGUNDO WHILE"<<endl;
                
                cont = 0;
                
                //quero mudar o valor guardado nessa posição de memória
                
                while(atual){
                    //cout<<"segundo while"<<endl;
                    //cout<<cont<<endl;
                    //cont++;

                    cout<<"ATUAL: "<<atual->conteudo<<endl;
                
                    //-----------------------------------------
                    //posição atual recebe nova celula
                    atual->setProx(nova_celula);
                    atual = nova_celula;
                    

                    //passando pra próxima posição
                    atual = atual->obterProx();


                    
                }
                
                cout<<"sai do segundo while"<<endl;
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

        void remover_pos(int pos){

            if(pos < 0 || pos >= this->verificaTamanho() || vazia()){
                cout<<"posição inválida"<<endl;
            }else{
                Celula<T> *atual = cabeca;
                
            }
            

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



