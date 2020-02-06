#include <bits/stdc++.h>
#define ll long long
#define maxC 123
using namespace std;
ll n;
string s;
void Enter() {
    cin >> n >> s;
}
void Solve() {
    while (i < n-1) {
        i+=j;
        cout << s[i];
        j++;
    }
}
int main() {
    Enter();
    Solve();
}

