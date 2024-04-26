
#include <bits/stdc++.h>
using namespace std;
int a[100],n,stop=0;
void init(){
    cin >> n;
    for (int i = 1; i <= n; i++) a[i] = 0;
}
void print(){
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << endl;
}
void sinh(){
    int i = n;
    while (i > 0 && a[i] == 1){
        a[i] = 0;
        i--;
    }
    if (i == 0) stop = 1;
    else a[i] = 1;
}
int main(){
    init();
    while (!stop){
        print();
        sinh();
    }
    return 0;
}
