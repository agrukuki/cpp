#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,s(0);
ll p[85];
// T C O D  I
// 4 6 8 12 20
void Init() {
    p['T'] = 4;
    p['C'] = 6;
    p['O'] = 8;
    p['D'] = 12;
    p['I'] = 20;
}
int faces(string x) {
    char c = x[0];
    return p[c];
}
void Enter() {
    cin >> n;
}
void Solve() {
    //cout << faces("Tetrahedron");
    //cout << faces("Cube");
    //cout << faces("Octahedron");
    //cout << faces("Dodacahedron");
    //cout << faces("Icosahedron");
    string str;
    for (int i = 0;i < n;i++) {
        cin >> str;
        s += faces(str);
    }
    cout << s;
}
int main() {
    Init();
    Enter();
    Solve();
}



