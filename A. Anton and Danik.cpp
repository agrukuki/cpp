#include <bits/stdc++.h>
#define ll long long
using namespace std;
double n,cnta(0),cntd(0);
string s;
void Enter() {
    cin >> n >> s;
}
void Solve() {
    for (int i = 0;i < n;i++) {
        if (s[i] == 'A') {
            cnta++;
        } else {
            cntd++;
        }
    }
    if (cnta > cntd) {
        cout << "Anton";
    } else if (cnta == cntd) {
        cout << "Friendship";
    } else {
        cout << "Danik";
    }
}
int main() {
    Enter();
    Solve();
}

