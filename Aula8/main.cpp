#include "bigint.hpp"
using namespace std;

int main(){

    bigInt b1 = "123123123213"_bi;
    bigInt b2 = "234532312312"_bi;

    cout << b1.getNumber() << endl;
    cout << b2.getNumber() << endl;

    b2 = b2+b1;

    cout << b1.getNumber() << endl;
    cout << b2.getNumber() << endl;

    

    return 0;
}