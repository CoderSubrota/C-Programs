#include <bits/stdc++.h>
using namespace std;

class Employe
{
public:
    char name[100];
    char city[100];
    int age;
    int salary;
};
int main()
{
    Employe group, group2,group3;
    cin.getline(group.name, 100);
    cin.getline(group.city, 100);
    cin >> group.age >> group.salary;
    getchar();

    cin.getline(group2.name, 100);
    cin.getline(group2.city, 100);
    cin >> group2.age >> group2.salary;
 
    getchar();
    cin.getline(group3.name, 100);
    cin.getline(group3.city, 100);
    cin >> group3.age >> group3.salary;

    cout << group.name << endl
         << group.city << endl
         << group.age << " " << group.salary;

    cout << endl
         << endl;

    cout << group2.name << endl
         << group2.city << endl
         << group2.age << " " << group2.salary;
  
   cout << endl
         << endl;

    cout << group3.name << endl
         << group3.city << endl
         << group3.salary;
         
    return 0;
}