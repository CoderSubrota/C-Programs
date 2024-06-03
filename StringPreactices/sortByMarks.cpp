#include <iostream>
#include <algorithm>

using namespace std;

// Define the Student class
class Student
{
public:
    string name;
    int cls;
    string section;
    int id;
    int mathMarks;
    int englishMarks;
    int totalMarks;

    // Method to calculate total marks
     void calculateTotalMarks()
    {
        totalMarks = mathMarks + englishMarks;
    }
};

// Comparator function to sort by totalMarks descending and id ascending
bool compareStudents(Student a, Student b)
{
  
    if (a.totalMarks != b.totalMarks)
    {
        return a.totalMarks > b.totalMarks;
    }
    return a.id < b.id;
}

int main()
{
    // Number of students
    int numStudents;
    cin >> numStudents ;
    // Array of students
    Student students[numStudents];

    // Take input for each student
    for (int i = 0; i < numStudents; i++)
    {

        cin >> students[i].name;
        cin >> students[i].cls;
        cin >> students[i].section;
        cin >> students[i].id;
        cin >> students[i].mathMarks;
        cin >> students[i].englishMarks;

        // Calculate total marks
        students[i].calculateTotalMarks();
    }

    // Sort the students
    sort(students, students + numStudents, compareStudents);

    // Print the sorted list of students
    for (int i = 0; i < numStudents; i++)
    {
        cout << students[i].name
             << " " << students[i].cls
             << " " << students[i].section
             << " " << students[i].id
             << " " << students[i].mathMarks
             << " " << students[i].englishMarks
             << endl;
             // << " " << students[i].totalMarks
    }

    return 0;
}
