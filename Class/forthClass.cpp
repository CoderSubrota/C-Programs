#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    string city;
    string gender;
    int age;
    int marks;

    Student(string name, string city, string gender, int age, int marks)
    {
        this->name = name;
        this->city = city;
        this->gender = gender;
        this->age = age;
        this->marks = marks;
    }
};

int main()
{
    char name[100], city[100], gender[100];
    int age, marks;
    cin.getline(name, 100);
    cin.getline(city, 100);
    cin.getline(gender, 100);
    cin >> age >> marks;

    Student *subrota = new Student("Subrota","Joypurhat","Male",25,42241);

    cout << subrota->name << " " << subrota->city<< " " << subrota->gender << " " << subrota->age << " " << subrota->marks;
         
    delete subrota ;
    
    return 0;
}