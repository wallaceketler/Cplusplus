#ifndef WEIGHT_H__
#define WEIGHT_H__

class Weigth{
    public:
        Weigth(double g): grams_(g) {}
        double get() const { return grams_ ;}
    private:
        double grams_;
};

Weigth operator"" _g (long double value){
    return Weigth(value);
}

Weigth operator"" _Kg (long double value){
    return Weigth(1000.0 * value);
}   


#endif