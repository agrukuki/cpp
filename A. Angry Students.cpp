#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll t,n;
string s;
bool f;
void Enter() {
    cin >> n >> s;
}
void Solve() {
    for (int i = 0;i < n-1;i++) {
        f = false;
        if (s[i] == 'A') {
            s[i+1] = 'A';
            f = true;
        }
    }
}
int main() {
    cin >> t;
    for (int i = 0;i < t;i++) {
        Enter();
        Solve();
    }
}



