#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    string section;
    string city;
    int marks;
    Student(string name, string section, string city, int marks)
    {
        this->name = name;
        this->section = section;
        this->city = city;
        this->marks = marks;
    }
};

int main()
{
    Student *rahul = new Student("Subrota ","Science","Joypurhat",85);
    // getline(cin, rahul->name);
    // getline(cin, rahul->section);
    // getline(cin, rahul->city);
    // cin >> rahul->marks;


    Student *bijoy = new Student("Bijoy ","Science","Khetlal",95);
    // getline(cin, bijoy->name);
    // getline(cin, bijoy->section);
    // getline(cin, bijoy->city);
    // cin >> bijoy->marks;

    *rahul = *bijoy ;

      delete bijoy ;

    cout << rahul->name << " "  << rahul->section << " "  << rahul->city << " "  << rahul->marks << endl;

    return 0;
}