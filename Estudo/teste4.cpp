#include <iostream>
using namespace std;


int main(){

    int x = 10;
    int y = 20;

    int *ptr = &x;
    int *ptr2 = &x;

    cout << *ptr << endl;
    cout << *ptr2 << endl;

    ptr2 = &y;

    cout << *ptr << endl;
    cout << *ptr2 << endl;

    return 0;
}