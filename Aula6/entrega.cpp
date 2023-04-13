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

URL operator"" _url(const wchar_t* url_value, size_t){
    
    for(int i = 0; i < sizeof(url_value); i++){
        cout<<url_value[i]<<endl;
    }

    int porta;
    string protocolo;
    string dominio;
    string caminho;
    
    //return URL(int porta, string protocolo, string dominio, string caminho); 
}

/*
class Teste{
    private:
        double x;

    public:
        int getX(){
            return this->x;
        }

        Teste(double x){
            this->x=x;
        }

};

Teste operator"" _tes(unsigned long long int x){
    return Teste(x);
}
*/

int main(int argc, char** argv){

    //URL x = "asdasd"_url;
    //Teste x = 15_tes;
    //cout<<x.getX()<<endl;

    return 0;
}


