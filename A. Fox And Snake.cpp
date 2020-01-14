#include <bits/stdc++.h>
#define ll long long
#define maxN 100000
using namespace std;
ll n,m;
void Enter() {
    cin >> n >> m;
    // n % 2 == 1
}
void Solve() {
    for (int i = 1;i <= n;i++) {
        if (i % 2 == 1) {
            for (int j = 0;j < m;j++) {
                cout << "#";
            }
            cout << endl;
        } else {
            if (i % 4 == 2) {
                cout << ".";
                for (int j = 0;j < m-2;j++) {
                    cout << ".";
                }
                cout << "#";
            } else {
                cout << "#";
                for (int j = 0;j < m-2;j++) {
                    cout << ".";
                }
                cout << ".";
            }

            cout << endl;
        }
    }
}
int main() {
    Enter();
    Solve();
}

