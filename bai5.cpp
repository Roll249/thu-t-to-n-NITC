#include <iostream>
using namespace std;
int primeSum(int n){
    int mod = 22082018;
    int sum=0;
    bool prime[n+1];
    for(int i=0;i<=n;i++) prime[i]=true;
    for(int p=2;p*p<=n;p++){
        if(prime[p]==true){
            for(int i=p*p;i<=n;i+=p){
                prime[i]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]) sum+=i;
    }
    return sum%mod;
}
int main(){
    cout << primeSum(30);
}