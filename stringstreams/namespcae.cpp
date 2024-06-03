#include <bits/stdc++.h>
using namespace std;
namespace Subrota // frog
{
    void printWord(string word)
    {
        cout << word + " World" << endl;
    }

    class Person
    {
    public:
        string name;
        int age;
        int salary;
        Person(string name, int age, int salary)
        {
            this->name = name;
            this->age = age;
            this->salary = salary;
        }
    };

}

namespace stringStream
{
    void printStream(string str)
    {
        stringstream ss(str);
        string word;

        while (ss >> word)
        {
            cout << word << " " << " World!!" << endl;
        };
    };
    void reverseString(stringstream& ss)
    {
        string word;
        if (ss >>  word)
        {
            reverseString(ss);
            cout << word  << " " ;

        }
    }
};

int main()
{
    string str;
    getline(cin, str);
    Subrota::printWord(str);
    Subrota::Person *Rahul = new Subrota::Person("Rahul roy", 25, 885558);
    Subrota::Person *Bijoy = new Subrota::Person("Bijoy", 25, 25555);
    *Rahul = *Bijoy;
    delete Bijoy;
    cout << Rahul->name << " " << Rahul->age << " " << Rahul->salary << endl;

    stringStream::printStream(str);
     string reStr ;
     getline(cin,reStr) ;
    stringstream ss(reStr);
    stringStream::reverseString(ss);
    return 0;
}