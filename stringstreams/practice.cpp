#include <bits/stdc++.h>
using namespace std;
//always use class after header

   class Student
{
      public:
	  string name;
     int roll;
};

bool cmp(Student a, Student b)
{
 if(a.roll > b.roll)   return true;
   else return false;
   }


int main() {


int n;
cin >> n;

Student a[n] ;



for(int i=0; i<n; i++){
     cin.ignore() ;
     getline(cin,a[i].name) ; cin >> a[i].roll ;
} ;

sort(a,a+n,cmp);

for(int i=0; i<n; i++){
   cout << a[i].name << " " << a[i].roll <<endl;
} ;

   return 0;
}