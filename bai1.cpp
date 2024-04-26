#include <iostream>
using namespace std;
int greatestCommonPrimeDivisor(int a, int b) {
    int res = -1;
    for(int i=2;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            res = i;
            while(a%i==0) a/=i;
            while(b%i==0) b/=i;
        }
    }
    return res;

}
int main(){
    int a,b;
    cin >> a >> b ;
    cout << greatestCommonPrimeDivisor(a,b);
    return 0;
}