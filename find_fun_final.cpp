#include <bits/stdc++.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        string S, X;
        cin >> S >> X;
        int cnt = 0;
        for (int i = 0; X[i] != '\0'; i++) {
            cnt++;
        }
        while ((int)S.find(X) != -1) {
            S.replace(S.find(X), cnt, "#");
        }
        cout << S << endl;
    }
    return 0;
}