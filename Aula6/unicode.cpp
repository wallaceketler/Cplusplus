#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv){

    string x = "\xF0\x9F\x98\x83";
    u16string y = u"\u1F603"; //mesmo que o de cima
    

    cout<<"O símbolo do euro \u20AC"<<endl;
    cout<<"Emoji: " << x << endl;


    return 0;
}