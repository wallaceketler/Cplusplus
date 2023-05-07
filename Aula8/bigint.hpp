#include <iostream>
#include <string>
#include <algorithm>
#include <regex>
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

                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n1[i]))  + leftOver + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10 + leftOver)[0];
                        leftOver = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) + leftOver)[0];
                        leftOver = 0;
                    }
                    
                }    
            }else if(difference < 0){ //len2 é maior
                n1 = complete + n1;

                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n1[i])) + leftOver + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10 + leftOver)[0];
                        leftOver = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) + leftOver)[0];
                        leftOver = 0;
                    }
                    
                }   
            }else{

                for(int i = n1.size()-1; i >= 0; i--){
          
                    if(stoi(string(1,n1[i])) + leftOver + stoi(string(1,n2[i]))>=10){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + stoi(string(1,n2[i])) - 10 + leftOver)[0];
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
                for(int i = n1.size()-1; i >= 0; i--){
                    if(((stoi(string(1,n1[i])) - borrow) < (stoi(string(1,n2[i]))))){
                        numberReturn.number += to_string(stoi(string(1,n1[i])) + 10 - stoi(string(1,n2[i])) - borrow)[0];
                        borrow = 1;
                    }else{
                        
                        numberReturn.number += to_string(stoi(string(1,n1[i])) - stoi(string(1,n2[i])) - borrow)[0];
                        borrow = 0;
                    }
                    
                }    
            }else if(difference < 0){ //len2 é maior
                n1 = complete + n1;
                
                for(int i = n1.size()-1; i >= 0; i--){
                    if(stoi(string(1,n2[i])) - borrow < stoi(string(1,n1[i]))){
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

                //verifica qual o maior valor, já que ambos tem mesmo tamanho
                for(int i = 0; i < n1.size(); i++){
                    if(stoi(string(1,n1[i]))>stoi(string(1,n2[i]))){
                        maior = 1;
                        break;
                    }else if(stoi(string(1,n2[i]))>stoi(string(1,n1[i]))){
                        maior = 2;
                        break;
                    }else{
                        continue;
                    }
                }

                //caso em que primeiro numero é maior
                if(maior == 1){
                    cout<<"CAI AQUI"<<endl;
                    for(int i = n1.size()-1; i >= 0; i--){
                        if(stoi(string(1,n1[i])) - borrow < stoi(string(1,n2[i]))){
                            numberReturn.number += to_string(stoi(string(1,n1[i])) + 10 - stoi(string(1,n2[i])) - borrow)[0];
                            borrow = 1;
                        }else{
                            
                            numberReturn.number += to_string(stoi(string(1,n1[i])) - stoi(string(1,n2[i])) - borrow)[0];
                            borrow = 0;
                        
                        }
                    }
                }else if(maior == 2){  //caso em que segundo é maior
                    cout<<"CAI ALI"<<endl;
                    for(int i = n1.size()-1; i >= 0; i--){
                        if(stoi(string(1,n2[i])) - borrow < stoi(string(1,n1[i]))){
                            numberReturn.number += to_string(stoi(string(1,n2[i])) + 10 - stoi(string(1,n1[i])) - borrow )[0];
                            borrow = 1;
                        }else{
                            
                            numberReturn.number += to_string(stoi(string(1,n2[i])) - stoi(string(1,n1[i])) - borrow)[0];
                            borrow = 0;
                        }
                    }
                    numberReturn.number += '-';
                }else{ //se tudo for igual
                    numberReturn.number = '0';
                }
                
            }

            reverse(numberReturn.number.begin(), numberReturn.number.end());
            
            //retira zero a esquerda
            int zeros = 0;
            bool negative = false;
            if(numberReturn.getNumber()[0] == '-'){
                negative = true;
            }
            for(int i = 0; i < numberReturn.number.size(); i++){

                
                if(numberReturn.getNumber()[i] == '0'){

                    zeros++;

                }else if(numberReturn.getNumber()[i] == '-'){
                    continue;
                }
                else{
                    break;
                }   
            }
            if(negative){
                numberReturn.number.erase(1,zeros);

            }else{
                numberReturn.number.erase(0,zeros);
            }
            
            return numberReturn;
        }

        bigInt operator*(const bigInt& o){

            string oValue = o.number;
            bigInt newO;
            newO.number = oValue;
            bigInt numberReturn = *this;
            bigInt initial = *this;
            bigInt one;
            one.number = '1';
            regex values("[1-9]|[1-9][0-9]*|0[1-9]+");
            newO.number[newO.getNumber().size()-1] = to_string(stoi(string(1,newO.getNumber()[newO.getNumber().size()-1]))-1)[0];
            cout<<stoi(string(1,newO.getNumber()[newO.getNumber().size()-1]))-1<<endl;
            cout<<newO.getNumber()<<endl;
            while(regex_match(newO.number,values)){
                numberReturn = numberReturn+initial;
                newO = newO-one;
            }

            return numberReturn;
        }

        bigInt operator/(const bigInt& o){

            bigInt numberReturn;
            int divisions = 0;
            regex values("[1-9]|[1-9][0-9]*|0[1-9]+");
            

            while(regex_match(this->getNumber(),values) || this->getNumber()[0] != '-'){
                
                *this = *this-o;
                cout<<this->getNumber()<<endl;
                
                divisions++;
            }
            if(this->getNumber()[0] == '-'){
                divisions--;
            }
  
            numberReturn.number = to_string(divisions);
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