#include <iostream>
#include <string>
using namespace std;

class bigInt{
    private:
        string number; 
    public:

        //construtor vazio
        bigInt(){}

        //construtor padrão
        bigInt(string number){
            this->number = number;
        }
        //construtor de cópia
        bigInt(const bigInt& b){
            this->number = b.number;
        }

        string getNumber(){
            return this->number;
        }

        bigInt operator+(const bigInt& o){

            //criação de variáveis
            bigInt numberReturn;
            string n1 = this->number;
            string n2 = o.number;
            int len1 = this->number.size();
            int len2 = o.number.size();
            int difference = len1 - len2;
            string complete = "";
            //criação de string para completar menor valor
            for(int i = 0; i < abs(difference); i++){
                complete+='0';
            }
            //se maior que zero significa que len1 é maior
            if(difference > 0){
                n1 = complete + n1;    
            }else if(difference < 0){ //len2 é maior
                n2 = complete + n2;
            }

            for(int i = 0; i < n1.size(); i++){
                numberReturn.number[i] = to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])))[0];
                
            }

            return numberReturn;
        }

        bigInt operator-(const bigInt& o){

        }

        bigInt operator*(const bigInt& o){

        }

        bigInt operator/(const bigInt& o){

        }

        bigInt& operator=(const bigInt& o){
            if(this != &o){
                this->number = o.number;
            }
            return *this;
        }
};

bigInt operator"" _bi(const char* number, size_t len){
    string value = number;
    return bigInt(number);
}