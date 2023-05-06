#include <iostream>
#include <string>
#include <algorithm>
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
            int leftOver = 0;
            string complete = "";
            //criação de string para completar menor valor
            for(int i = 0; i < abs(difference); i++){
                complete+='0';
            }

            //se maior que zero significa que len1 é maior
            if(difference > 0){
                n2 = complete + n2;
                cout<<n1<<endl;
                cout<<n2<<endl;
                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n1[i])) + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10)[0];
                        leftOver = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) + leftOver)[0];
                        leftOver = 0;
                    }
                    
                }    
            }else if(difference < 0){ //len2 é maior
                n1 = complete + n1;
                cout<<n1<<endl;
                cout<<n2<<endl;
                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n1[i])) + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10)[0];
                        leftOver = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) + leftOver)[0];
                        leftOver = 0;
                    }
                    
                }   
            }else{
                cout<<n1<<endl;
                cout<<n2<<endl;
                for(int i = n1.size()-1; i >= 0; i--){
          
                    if(stoi(string(1,n1[i])) + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10)[0];
                        leftOver = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) + leftOver)[0];
                        leftOver = 0;
                    }
                    
                }
                if(leftOver == 1){
                    numberReturn.number += '1';
                }   
            }

            reverse(numberReturn.number.begin(), numberReturn.number.end());
            return numberReturn;
        }

        bigInt operator-(const bigInt& o){

            bigInt numberReturn;
            string n1 = this->number;
            string n2 = o.number;
            int len1 = this->number.size();
            int len2 = o.number.size();
            int difference = len1 - len2;
            int borrow = 0;

            string complete = "";
            //criação de string para completar menor valor
            for(int i = 0; i < abs(difference); i++){
                complete+='0';
            }

            //primeiro número é maior
            if(difference > 0){
                n2 = complete + n2;
                cout<<n1<<endl;
                cout<<n2<<endl;
                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n1[i])) < stoi(string(1,n2[i]))){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + 10 - stoi(string(1,n2[i])) - borrow)[0];
                        borrow = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) - stoi(string(1,n2[i])) - borrow)[0];
                        borrow = 0;
                    }
                    
                }    
            }else if(difference < 0){ //len2 é maior
                n1 = complete + n1;
                
                cout<<n1<<endl;
                cout<<n2<<endl;
                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n2[i])) < stoi(string(1,n1[i]))){
                        numberReturn.number += to_string(stoi(string(1,n2[i])) + 10 - stoi(string(1,n1[i])) - borrow )[0];
                        borrow = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n2[i])) - stoi(string(1,n1[i])) - borrow)[0];
                        borrow = 0;
                    }
                    
                }

                numberReturn.number += '-';   
            }else{

                int maior = -1;
                cout<<n1<<endl;
                cout<<n2<<endl;
                //verifica qual o maior valor, já que ambos tem mesmo tamanho
                for(int i = 0; i < n1.size()-1; i++){
                    if(n1[i]>n2[i]){
                        maior = 1;
                        break;
                    }else if(n2[i]>n1[i]){
                        maior = 2;
                        break;
                    }
                }

                
                //caso em que primeiro numero é maior
                if(maior == 1){
                    for(int i = n1.size()-1; i >= 0; i--){
                        if(stoi(string(1,n1[i])) < stoi(string(1,n2[i]))){
                            numberReturn.number += to_string(stoi(string(1,n1[i])) + 10 - stoi(string(1,n2[i])) - borrow)[0];
                            borrow =1;
                        }else{
                            
                            numberReturn.number += to_string(stoi(string(1,n1[i])) - stoi(string(1,n2[i])) - borrow)[0];
                            borrow = 0;
                        
                        }
                    }
                }else{  //caso em que segundo é maior
                    for(int i = n1.size()-1; i >= 0; i--){
                        if(stoi(string(1,n2[i])) < stoi(string(1,n1[i]))){
                            numberReturn.number += to_string(stoi(string(1,n2[i])) + 10 - stoi(string(1,n1[i])) - borrow )[0];
                            borrow =1;
                        }else{
                            
                            numberReturn.number += to_string(stoi(string(1,n2[i])) - stoi(string(1,n1[i])) - borrow)[0];
                            borrow = 0;
                        }
                    }
                    numberReturn.number += '-';
                }
                
            }

            reverse(numberReturn.number.begin(), numberReturn.number.end());
            return numberReturn;
        }

        bigInt operator*(const bigInt& o){

            bigInt numberReturn = *this;
            bigInt initial = *this;

            for(int i = 0; i < stoi(o.number) - 1; i++){
                numberReturn = numberReturn+initial;
            }

            return numberReturn;
        }

        bigInt operator/(const bigInt& o){
            bigInt numberReturn;

            return numberReturn;
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