#include <iostream>
using namespace std;

class Racional{
    
    private:

    int num;
    int den;

    public:

    //construtor vazio
    Racional(){
        this->num = 0;
        this->den = 1;
    };

    //construtor com parâmetros
    Racional(int num, int den){     
        this->num = num;
        this->den = den;
    };

    //construtor de cópia
    Racional(const Racional& r){
        this->num = r.num;
        this->den = r.den;
    }

    //construtor de transferência
    
    Racional(Racional &&other){
        this->num = other.num;
        this->den = other.den;
        other.num = 0;
        other.den = 0;
    };
    

    ~Racional(){};

    int const numerador(){
        return this->num;
    }

    int const denominador(){
        return this->den;
    }

    void numerador(int num){
        this->num = num;
    }

    void denominador(int den){
        this->den = den;
    }

    double valor(){
        return (double)this->num/this->den;
    }

    bool const operator<(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();

        if(n1<n2){
            return true;
        }else{
            return false;
        }
    }

    bool const operator<=(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();

        if(n1<=n2){
            return true;
        }else{
            return false;
        }
        
    }

    bool const operator>(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();

        if(n1>n2){
            return true;
        }else{
            return false;
        }
        
    }

    bool const operator>=(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();

        if(n1>=n2){
            return true;
        }else{
            return false;
        }
        
    }

    bool const operator==(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();

        if(n1==n2){
            return true;
        }else{
            return false;
        }
        
    }

    Racional operator+(const Racional& r){
        
        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1+n2;

        x.numerador(resultado*1000);
        x.denominador(1000);

        return x; 

    }

    Racional operator-(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1-n2;

        x.numerador(resultado*1000);
        x.denominador(1000);

        return x; 

    }

    Racional operator/(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1/n2;

        x.numerador(resultado/100);
        x.denominador(100);

        return x; 

    }

    Racional operator+=(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1+n2;

        x.numerador(resultado*1000);
        x.denominador(1000);
        
        *this = x;
        return x; 

    }

    Racional operator-=(const Racional& r){
        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1-n2;

        x.numerador(resultado*1000);
        x.denominador(1000);

        *this = x;

        return x; 
    }

    Racional operator*=(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1*n2;

        x.numerador(resultado*1000);
        x.denominador(1000);

        *this = x;

        return x; 

    }

    Racional operator/=(const Racional& r){

        Racional x = r;        

        double n1 = this->valor();
        double n2 = x.valor();
        double resultado = n1/n2;

        x.numerador(resultado*1000);
        x.denominador(1000);

        *this = x;

        return x; 

    }
    
    Racional operator++(int){

        Racional r;
        r.numerador(this->num+den);
        r.denominador(this->den+den);

        *this = r;

        return r; 
    }

    Racional operator--(int){

        Racional r;
        r.numerador(this->num-den);
        r.denominador(this->den-den);

        *this = r;

        return r;

    }
    
    Racional operator-(){
        this->num = -this->num;
        return *this;
    }
    

    Racional& operator=(Racional&& other){
        if(this != &other){
            this->num = other.num;
            this->den = other.den;
        }
        return *this;
    }

    Racional& operator=(const Racional& o){
        if(this != &o){
            this->num = o.num;
            this->den = o.den;
        }
        return *this;
    }

};