#include <bits/stdc++.h>
#define ll long long
#define maxN 100
using namespace std;
ll n,t;
void Enter() {
    cin >> n;
}
void Solve() {
    for (int i = 0;i < n;i++) {
        cin >> t;

        if (t == 1) {
            cout << "HARD";
            return;
        }
    }
    cout << "EASY";
}
int main() {
    Enter();
    Solve();
}

