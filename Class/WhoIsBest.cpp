#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {

        class Student
        {
        public:
            int id;
            char name[120];
            char section[130];
            int totalMarks;
        };

        Student Group, Group2, Group3;
        cin >> Group.id;
        cin >> Group.name;
        cin >> Group.section;
        cin >> Group.totalMarks;
        getchar();
        cin >> Group2.id;
        cin >> Group2.name;
        cin >> Group2.section;
        cin >> Group2.totalMarks;
        getchar();
        cin >> Group3.id;
        cin >> Group3.name;
        cin >> Group3.section;
        cin >> Group3.totalMarks;
 
        if(Group.totalMarks > Group2.totalMarks && Group.totalMarks > Group3.totalMarks) {
            cout << Group.id << " "  << Group.name << " "  << Group.section << " "  << Group.totalMarks << endl;
        } else  if(Group2.totalMarks > Group.totalMarks && Group2.totalMarks > Group3.totalMarks) {
            cout << Group2.id << " "  <<Group2.name << " "  <<Group2.section << " "  << Group2.totalMarks << endl;
        }
        else  if(Group3.totalMarks > Group.totalMarks && Group3.totalMarks > Group2.totalMarks) {
            cout << Group3.id << " "  <<Group3.name << " "  <<Group3.section << " "  << Group3.totalMarks << endl;
        }
        else  if(Group.totalMarks ==  Group2.totalMarks || Group.totalMarks == Group3.totalMarks) {
            cout << Group.id << " "  <<  Group.name << " "  << Group.section << " "  << Group.totalMarks << endl;
        }else{
            cout << Group2.id << " "  <<  Group2.name << " "  << Group2.section << " "  << Group2.totalMarks << endl;

        }
    }
    return 0;
}