#include <iostream>
using namespace std;
bool checkPalin(int n){
    int temp=n;
    int res=0;
    while(temp>0){
        res=res*10+temp%10;
        temp/=10;
    }
    return res==n;
}
void buildCheck(string S){
    int n=S.length();
    int res=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int temp=0;
            for(int k=i;k<=j;k++){
                temp=temp*10+(S[k]-'0');
            }
            if(checkPalin(temp)) res++;
        }
    }
    cout << res;
}

int main(){
    string S;
    cin >> S;
    buildCheck(S);
    return 0;
}