#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
string s,x;
bool d;
void Enter() {
    getline(cin,s);
}
void Solve() {
    d = false;
    if (s.length() <7) {
        cout << "NO";
        return;
    }
    for (int i = 0;i <= s.length()-7;i++) {
        x = s.substr(i,7);
        if (x == "0000000" || x == "1111111") {
            d = true;
        }
    }
    if (d) cout <<"YES";
    else cout << "NO";
}
int main() {
    Enter();
    Solve();
}
