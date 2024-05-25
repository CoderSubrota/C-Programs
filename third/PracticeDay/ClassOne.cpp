#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    string section;
    int math_marks;
    string cls;
};
int main()
{
 Student A,B,C;

    A.name = "Rahul";
    A.roll = 11;
    A.section = "Science";
    A.math_marks = 95;
    A.cls = "Ten";

    B.name = "Subrota";
    B.roll = 101;
    B.section = "Science";
    B.math_marks = 45;
    B.cls = "Nine";

    C.name = "Bijoy";
    C.roll = 12;
    C.section = "Science";
    C.math_marks = 85;
    C.cls = "Ten";

    if (A.math_marks > B.math_marks && A.math_marks > C.math_marks)
    {
        cout << A.name << " " << A.roll << " " << A.section << " "
             << A.math_marks << " " << A.cls;
    }
    else if (B.math_marks > A.math_marks && B.math_marks > C.math_marks)
    {
        cout << B.name << " " << B.roll << " " << B.section << " "
             << B.math_marks << " " << B.cls;
    }
    else
    {
        cout << C.name << " " << C.roll << " " << C.section << " "
             << C.math_marks << " " << C.cls;
    }

    return 0;
}