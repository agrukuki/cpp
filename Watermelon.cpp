#include <bits/stdc++.h>
using namespace std;
int n;
void Enter() {
    cin >>  n;
}
void Solve() {
    for (int i = 1;i < n-1;i++) {
        int j = n - i;
        if (i % 2 == 0 && j % 2 == 0) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main() {
    Enter();
    Solve();
}
