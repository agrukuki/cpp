#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll n,maxS(0);
string s,x;
bool MNDS(string str) {
    for (int i = 0;i < str.length()-1;i++) {
        if (int(str[i]) > int(str[i+1])) {
            return false;
        }
    }
    return true;
}
void Enter() {
    cin >> n;
    getline(cin,s);
    getline(cin,s);
}
void Solve() {
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    for (int i = 0;i < n;i++) {
        for (int j = 1;j <= n-i;j++) {
            x = s.substr(i,j);
            if (maxS < x.length() && MNDS(x)) {
                cout << maxS << x.length() << endl;
                maxS = x.length();
            }
        }
    }
    cout << maxS;
}
int main() {
    Enter();
    Solve();
}

