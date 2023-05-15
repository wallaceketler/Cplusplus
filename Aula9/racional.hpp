class Racional{
    
    private:

    int num;
    int den;

    public:

    //construtor vazio
    Racional(){};

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
    Racional(){};

    ~Racional(){};

    int const numerador(){
        return this->num;
    }

    int const denominador(){
        return this->den;
    }

    int numerador(int num){
        this->num = num;
    }

    int denominador(int den){
        this->den = den;
    }

    double valor(){
        return this->num/this->den;
    }

    Racional const operator<(const Racional& r){}

    Racional const operator<=(const Racional& r){}

    Racional const operator>(const Racional& r){}

    Racional const operator>=(const Racional& r){}

    Racional const operator==(const Racional& r){}

    Racional operator+(const Racional& r){}

    Racional operator-(const Racional& r){}

    Racional operator/(const Racional& r){}

    Racional operator+=(const Racional& r){}

    Racional operator-=(const Racional& r){}

    Racional operator*=(const Racional& r){}

    Racional operator/=(const Racional& r){}
    
    Racional operator++(int){}

    Racional operator--(int){}


};