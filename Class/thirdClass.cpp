#include <iostream>
#include <string>

using namespace std;

class Student
{
public:
    string name;
    string age;
    string gender;
    int roll;
  //use string data type instead of char 
  
    // Constructor with initialization list
    Student(string name, string age, string gender,int roll)
    {
        this->name = name;
        this->age = age;
        this->gender = gender;
        this-> roll =roll;
    }
};

int main()
{
    // Create a Student object
    Student rahim("Rahim chandra sarker", "28", "Male",245);

    // Output the Student object's properties
    cout << "Name: " << rahim.name << ", Age: " << rahim.age << ", Gender: " << rahim.gender<<
     ",  Role " << rahim.roll << endl;

    return 0;
}
