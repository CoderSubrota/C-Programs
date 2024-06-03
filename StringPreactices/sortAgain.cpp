#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
    string name;
    int cls;
    char section;
    long long id;
    int math_marks;
    int eng_marks;
};

// Comparator function to sort the students
bool compare(Student a, const Student b) {
    if (a.eng_marks != b.eng_marks)
        return a.eng_marks > b.eng_marks;
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
    return a.id < b.id;
}

int main() {
    int N;
    cin >> N;
    // vector<Student> students(N);
    Student students[N] ;

    for (int i = 0; i < N; ++i) {
        cin >> students[i].name >> students[i].cls >> students[i].section >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }

    // Sort students based on the custom comparator
    sort(students ,students+N, compare);

    // Print sorted students
    for (auto student : students) {
        cout << student.name << " " << student.cls << " " << student.section << " " << student.id << " " << student.math_marks << " " << student.eng_marks << endl;
    }

    return 0;
}
