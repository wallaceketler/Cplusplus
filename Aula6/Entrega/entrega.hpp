#include <iostream>
#include <string>

using namespace std;

class URL{
    public:

        //construtor vazio
        URL();  

        //construtor de cópia
        URL(const URL& u){
            this->porta = u.porta;
            this->caminho = u.caminho;
            this->dominio = u.dominio;
            this->protocolo = u.protocolo;
        }

        //construtor com parâmetros
        URL(int porta, string dominio, string caminho, string protocolo){
            this->porta = porta;
            this->dominio = dominio;
            this->caminho = caminho;
            this->protocolo = protocolo;
        } 

        //setters e getters
        void setPorta(int porta){
            this->porta = porta;
        }
        int getPorta(){
            return this->porta;
        }

        void setProtocolo(string protocolo){
            this->protocolo = protocolo;
        }
        string getProtoclo(){
            return this->protocolo;
        }

        void setDominio(string dominio){
            this->dominio = dominio;
        }
        string getDominio(){
            return this->dominio;
        }

        void setCaminho(string caminho){
            this->caminho = caminho;
        }
        string getCaminho(){
            return this->caminho;
        }

    private:
        int porta;
        string protocolo;
        string dominio;
        string caminho;

};

URL operator"" _url(const char* url_value, size_t len){

    string value = url_value;
    cout<<"URL recebida: "<<value<<endl;
    

    //tokenização
    string pegaPorta = "";
    int porta = -1;         //representa que não tem
    string protocolo = "";
    string dominio = "";
    string caminho = "";

    //variáveis auxiliares
    int it = 0;
    int aux = 0;
    bool temPorta = false;
    bool temCaminho = false;

    //verifica o protocolo
    while(aux != 1){
        protocolo += value[it];
      
        it++;
        if(value[it] == ':')
            aux++;
    }
    aux = 0;
    it += 3; //pula as barras
    //verifica dominio
    while(aux != 1){
        dominio += value[it];
   
        it++;
        if(value[it] == ':'){
            temPorta = true;
            aux++;
        }else if(value[it] == '/'){
            temCaminho = true;
            aux++;
        }else if(value[it] == '\0'){
            aux++;
        }
    }
    aux = 0;
    it += 1;
    //verifica porta (opcional)
    if(temPorta){
        while(aux != 1){
            pegaPorta += value[it];
   
            it++;
            if(value[it] == '/'){
                temCaminho = true;
                aux++;
                porta = stol(pegaPorta);
            }else if(value[it] == '\0'){
                aux++;
                porta = stol(pegaPorta);
            }
        }
        it += 1;
    }
    aux = 0;

    //verifica caminho (opcional)
    if(temCaminho){
        cout<<value<<endl;
            while(aux != 1){
                caminho += value[it];
                
                it++;
                if(value[it] == '\0'){
                    aux++;
                }
            
        }
    }
    
    return URL(porta, dominio, caminho, protocolo);
}