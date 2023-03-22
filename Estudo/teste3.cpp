#include <iostream>
using namespace std;

int main(){

    int x = 10;
    int *ptr = &x;

    *ptr = 11;

    cout << x << endl;


    return 0;
}