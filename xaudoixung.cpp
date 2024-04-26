#include <iostream>
using namespace std;
bool isPalindrome(string s) {
    int n =s.length();
    for(int i =0 ; i <=n/2; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}
int main() {
    int t;
    cin >>t ;
    int n =t ;
    int i = 0;
    int a[t]={};
    while(t--){
    char s[100];
    cin >> s;
    a[i] = isPalindrome(s);
    i++;
    }
    for(int i =0; i <n; i++){
        if(a[i] == 1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
    
}