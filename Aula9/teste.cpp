#include <iostream>
#include <vector>
#include <algorithm>

int main(){

    std::vector<int> v = {4,3,5,6,1,2};
    std::sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        std::cout<<v[i]<<std::endl;
    }
    return 0;
}