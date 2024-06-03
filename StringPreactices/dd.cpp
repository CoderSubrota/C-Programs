#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Define the Student class
class Student {
public:
    string name;
    int id;
    string section;
    int mathMarks;
    int englishMarks;
    int maxMarks;

    // Constructor
    Student(string n, int i, string s, int m, int e)
        : name(n), id(i), section(s), mathMarks(m), englishMarks(e) {
        maxMarks = max(mathMarks, englishMarks);
    }
};

// Comparator function to sort by maxMarks descending and id ascending
bool compareStudents(const Student &a, const Student &b) {
    if (a.maxMarks != b.maxMarks) {
        return a.maxMarks > b.maxMarks;
    }
    return a.id < b.id;
}

int main() {
    // List of students
    vector<Student> students = {
        Student("Rahim", 101, "A", 85, 90),
        Student("Karim", 102, "B", 78, 88),
        Student("Rayhan", 103, "A", 85, 80),
        Student("Sara", 104, "B", 90, 95),
        Student("Lina", 105, "A", 88, 85)
    };

    // Sort the students
    sort(students.begin(), students.end(), compareStudents);

    // Print the sorted list of students
    for (const Student &student : students) {
        cout << "Name: " << student.name 
             << ", ID: " << student.id 
             << ", Section: " << student.section 
             << ", Math Marks: " << student.mathMarks 
             << ", English Marks: " << student.englishMarks 
             << ", Max Marks: " << student.maxMarks << endl;
    }

    return 0;
}
