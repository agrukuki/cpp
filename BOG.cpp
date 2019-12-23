#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
int CUC(string str){
    int cnt = 0;
    for (int i = 0; i < str.length(); i++){
         bool uni = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  uni = true;
                  break;
              }
         }
         if (!uni){
             cnt++;
         }
    }

    return cnt;
}
void Enter() {
    getline(cin,s);
}
void Solve() {
    if (CUC(s) % 2 == 0) {
        cout << "CHAT WITH HER!";
        return;
    }
    cout << "IGNORE HIM!";
}
int main() {
    Enter();
    Solve();
}
