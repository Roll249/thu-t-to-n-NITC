#include <iostream>
using namespace std;
int lastDigitDiffZero(int n){
    long long res=1;
    for(int i=1;i<=n;i++){
        res*=i;
        while(res%10==0) res/=10;
        res%=1000000000;
    }
    return res%10;
}
int main(){
    int n;
    cin >> n;
    cout << lastDigitDiffZero(n);
    return 0;
}