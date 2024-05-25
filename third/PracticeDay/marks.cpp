#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        class Student
        {
        public:
            int id;
            char name[120];
            char section[150];
            int total_marks;
        };

        Student A, B, C;

        cin >> A.id;
        cin >> A.name;
        cin >> A.section;
        cin >> A.total_marks;

        getchar();

        cin >> B.id;
        cin >> B.name;
        cin >> B.section;
        cin >> B.total_marks;

        getchar();

        cin >> C.id;
        cin >> C.name;
        cin >> C.section;
        cin >> C.total_marks;

        // first condition

        if (A.total_marks > B.total_marks && A.total_marks > C.total_marks)
        {
            cout << A.id << " " << A.name << " " << A.section << " " << A.total_marks << endl;
        }
        else if (B.total_marks > C.total_marks && B.total_marks > A.total_marks)
        {
            cout << B.id << " " << B.name << " " << B.section << " " << B.total_marks << endl;
        }
        else if (C.total_marks > B.total_marks && C.total_marks > A.total_marks)
        {
            cout << C.id << " " << C.name << " " << C.section << " " << C.total_marks << endl;
        }
        else if (A.total_marks == B.total_marks || A.total_marks == C.total_marks)
        {
            cout << A.id << " " << A.name << " " << A.section << " " << A.total_marks << endl;
        }
        else
        {
            cout << B.id << " " << B.name << " " << B.section << " " << B.total_marks << endl;
        }
    }

    return 0;
}