#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int N, S;
        cin >> N >> S;
        int A[N];
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        sort(A, A + N);
        bool o = false;

        for (int i = 0; i < N - 2; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                for (int k = j + 1; k < N; k++) {
                    if (A[i] + A[j] + A[k] == S) {
                        o = true;
                        break;
                    }
                }
                if (o) break;
            }
            if (o) break;
        }

        if (o) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
