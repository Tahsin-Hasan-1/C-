#include <bits/stdc++.h>
using namespace std;
class st {
   public:
    string nm;
    int cls;
    char s;
    int id;
    int eng_marks;
    int math_marks;
    int t;
};
bool cmp(st l, st r) {
    if (l.t == r.t) {
        return l.id < r.id;
    }
    return l.t > r.t;
}
int main() {
    int N;
    cin >> N;
    st r[N];
    for (int i = 0; i < N; i++) {
        cin >> r[i].nm >> r[i].cls >> r[i].s >> r[i].id >> r[i].math_marks >> r[i].eng_marks;
        r[i].t = r[i].eng_marks + r[i].math_marks;
    }
    sort(r, r + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << r[i].nm << " " << r[i].cls << " " << r[i].s << " " << r[i].id << " " << r[i].math_marks << " " << r[i].eng_marks << endl;
    }
    return 0;
}