#include <bits/stdc++.h>
using namespace std;
class st {
   public:
    string nm;
    int cls;
    char s;
    int id;
};
int main() {
    int N;
    cin >> N;
    st r[N];
    for (int i = 0; i < N; i++) {
        cin >> r[i].nm >> r[i].cls >> r[i].s >> r[i].id;
    }
    for (int i = 0; i < N / 2; i++) {
        char p;
        p = r[i].s;
        r[i].s = r[N - i - 1].s;
        r[N - i - 1].s = p;
    }
    for (int i = 0; i < N; i++) {
        cout << r[i].nm << " " << r[i].cls << " " << r[i].s << " " << r[i].id << endl;
    }
    return 0;
}