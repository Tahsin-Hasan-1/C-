#include <bits/stdc++.h>
using namespace std;
int* sort_it(int x) {
    int* A = new int[x];
    for (int i = 0; i < x; i++) {
        cin >> A[i];
    }

    sort(A, A + x, greater<int>());
    return A;
}

int main() {
    int N;

    cin >> N;
    int* a = sort_it(N);
    for (int i = 0; i < N; i++) {
        cout << a[i] << " ";
    }

    return 0;
}