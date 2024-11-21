#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        Student s1, s2, s3;

        cin >> s1.id;
        cin >> s1.name;
        cin >> s1.section;
        cin >> s1.marks;

        cin >> s2.id;
        cin >> s2.name;
        cin >> s2.section;
        cin >> s2.marks;

        cin >> s3.id;
        cin >> s3.name;
        cin >> s3.section;
        cin >> s3.marks;

        Student* b = &s1;

        if (s2.marks > b->marks ||
            (s2.marks == b->marks && s2.id < b->id)) {
            b = &s2;
        }

        if (s3.marks > b->marks ||
            (s3.marks == b->marks && s3.id < b->id)) {
            b = &s3;
        }

        cout << b->id << " "
             << b->name << " "
             << b->section << " "
             << b->marks << endl;
    }
    return 0;
}