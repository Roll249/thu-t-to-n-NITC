#include <iostream>
#include <string>
using namespace std;
string chuanHoa(string s){
  string res ="";
  for(int i = 0 ; i <s.size(); i++){
    if (s[i] >= 'A' && s[i] <= 'Z') res += s[i] + 32;
    else if(s[i] >='a' && s[i]<='z') res += s[i];
    else if(s[i] >='0' && s[i]<='9') res += s[i];
    else if(s[i]=='?') res += ' ';
    else if(s[i]==',' && s[i+1]==','){
        while(s[i]==',') i++;
        res += ',';
        i--;
    }
    else res += ' ';
  }
    while(res[0] == ' ' || res[0]==',' ) res.erase(0,1);
    while(res.find("  ") != -1) res.erase(res.find("  "),1);
    while(res[res.size()-1] == ' ' || res[res.size()-1] == ',') res.erase(res.size()-1,1);
    if(res[0] < '0' || res[0] > '9') res[0] -= 32;
    res += '?' ;
    return res;
}
int main(){
    string s;
    getline(cin,s);
    cout << chuanHoa(s) << endl;
    return 0;
}