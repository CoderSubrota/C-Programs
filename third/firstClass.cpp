#include<bits/stdc++.h>
using namespace std;
int main(){
class Student{
    public:
    int rollno;
    char name[100];
    int age;
    double cgpa;
};

Student group;
char temp[100] = "Subrota chandra sarker";
strcpy(group.name,temp) ;
group.rollno = 1244;
group.age = 24;
group.cgpa = 4.06;

cout << group.name  << " " << group.age << " " << group.rollno 
<<" " << group.cgpa;
 return 0;
}