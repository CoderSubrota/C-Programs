#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name; 
    int roll;
    int marks;
};
bool compare (Student a, Student b){
    if(a.roll < b.roll) {return true; }
    else if(a.roll > b.roll) { return false;}
     else if(a.marks < b.marks) { return true;}
     else if (a.marks > b.marks) {return false;};
}

int main() {
 int n;
 cin >> n;
 Student * array = new Student[n] ;
 for(int i=0; i<n; i++){
    cin.ignore() ;
    getline(cin,array[i].name) ;
    cin >> array[i].roll;
    cin >> array[i].marks ;
 }

 sort(array,array+n,compare) ;

 for(int i=0; i<n; i++){
    cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
 }
   return 0;
}