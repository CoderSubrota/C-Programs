#include <bits/stdc++.h>
using namespace std;
class Cricketer{
    public:
    int jersey_no;
    string country;
};
int main() {
    Cricketer * Dhoni = new Cricketer() ;
    Dhoni->jersey_no=18;
    Dhoni->country="India";
     
    Cricketer * Kholi = new Cricketer() ;
    //copy
    Kholi->jersey_no=Dhoni->jersey_no;
    Kholi->country=Dhoni->country;

  delete Dhoni ;
  cout <<     Kholi->jersey_no << " " <<     Kholi->country ;
  delete Kholi ;
   return 0;
}