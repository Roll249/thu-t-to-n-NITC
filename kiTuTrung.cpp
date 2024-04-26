#include <iostream>
#include <string>
using namespace std;

void finDuplicate(string str) {
    int n = str.length();
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = i + 1; j < n; j++) {
            if (str[i] == str[j]) {
                flag = true;
                break;
            }
        }
        if (flag) {
            cout << str[i] << " ";
        }
    }
}
int main (){
    string str;
    cout << "Nhap chuoi: ";
    getline(cin, str);
    cout << "Ki tu trung la: ";
    finDuplicate(str);
    return 0;
}