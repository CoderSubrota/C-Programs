#include <bits/stdc++.h>
using namespace std;
class Freq{
    public:
    char value;
    int count;
};

bool compaire(Freq a , Freq b){
    if(a.count > b.count) return true;
    else return false;
}
int main() {
string str ;
cin >> str ;
 Freq f[26] ; 
 for(int i=0; i<26; i++){
  f[i].value = i + 97 ;
  f[i].count = 0 ;
 }

for(char c:str){
    f[c-97].count++;
}

//sort
sort(f,f+26,compaire) ;

for(int i=0; i<26; i++){
 if(f[i].count > 0 ){
     cout << f[i].value << " : " << f[i].count << endl;
 }
}
   return 0;
}