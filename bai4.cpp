#include <iostream>
using namespace std;
int digitsProduct(int product){
    if(product==0) return 10;
    if(product<10) return product;
    int res=0;
    int mul=1;
    for(int i=9;i>1;i--){
        while(product%i==0){
            product/=i;
            res+=mul*i;
            mul*=10;
        }
    }
    if(product>10) return -1;
    return res;
}
int digitsProduct(int product){
    //
};
int main(){
    
}