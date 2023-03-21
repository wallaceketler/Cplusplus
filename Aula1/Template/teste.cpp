using namespace std;

template <typename T> T myMax(T x, T y){
    return (x > y) ? x : y;
}

int main(){
    //Call myMax for int
    cout << myMax<int>(3, 7) << endl;
    //Call myMax for double
    cout << myMax<double>(3.0, 7.0) << endl;
