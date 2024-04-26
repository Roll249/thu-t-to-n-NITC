//SovleNQueen

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int n;
vector<int> a;
vector<vector<int>> res;
bool kiemTra(int x2, int y2){
    for (int i = 0; i < x2; i++){
        if (a[i] == y2 || abs(i - x2) == abs(a[i] - y2)) return false;
    }
    return true;
}
void datHau(int i){
    for (int j = 0; j < n; j++){
        if (kiemTra(i, j)){
            a[i] = j;
            if (i == n - 1) res.push_back(a);
            else datHau(i + 1);
        }
    }
}
int main(){
    cin >> n;
    a.resize(n);
    datHau(0);
    for (int i = 0; i < res.size(); i++){
        for (int j = 0; j < res[i].size(); j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}
// Path: sinhNhiphan.cpp
// Compare this snippet from queen.cpp:
