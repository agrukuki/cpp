#include <bits/stdc++.h>
#define ll long long
using namespace std;
string s;
char arr[13] = {'A','E','I','O','U','Y','a','e','i','o','u','y'};
bool Check(char x) {
    for (int i = 0;i < 12;i++) {
        if (x == arr[i]) {
            return false;
        }
    }
    return true;
}
void Enter() {
    getline(cin,s);
}
void Solve() {
    for (int i = 0;i < s.length();i++) {
        if (Check(s[i])) {
            cout << ".";
            if (s[i] < 91) {
                cout << char(s[i] + 32);
            } else {
                cout << char(s[i]);
            }
        }
    }
}
int main() {
    Enter();
    Solve();
}

