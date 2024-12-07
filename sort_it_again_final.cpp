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
};
bool cmp(st l, st r) {
    if (l.eng_marks == r.eng_marks) {
        if (l.math_marks == r.math_marks) {
            return l.id < r.id;
        } else
            return l.math_marks > r.math_marks;
    } else
        return l.eng_marks > r.eng_marks;
}
int main() {
    int N;
    cin >> N;
    st r[N];
    for (int i = 0; i < N; i++) {
        cin >> r[i].nm >> r[i].cls >> r[i].s >> r[i].id >> r[i].math_marks >> r[i].eng_marks;
    }
    sort(r, r + N, cmp);
    for (int i = 0; i < N; i++) {
        cout << r[i].nm << " " << r[i].cls << " " << r[i].s << " " << r[i].id << " " << r[i].math_marks << " " << r[i].eng_marks << endl;
    }
}