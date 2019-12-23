#include <bits/stdc++.h>
#define ll long long
#define maxN 20
using namespace std;
string s;
ll n,cnt(0);
void Enter() {
    cin >> n >> s;
}
void Solve() {
    for (int i = 0;i < n-1;i++) {
        if (s[i] == s[i+1]) {
            cnt++;
        }
    }
    cout<< cnt;
}
int main() {
    Enter();
    Solve();
}


