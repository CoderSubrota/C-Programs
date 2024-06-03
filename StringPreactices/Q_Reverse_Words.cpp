#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    getline(cin,str) ;

     stringstream ss(str) ;

    string word ;
    
    while (ss>>word)
    {
      int len = word.size() ;
       for(int i=len-1; i>=0 ; i--) {
          cout << word[i] ;
       }
       int len1 =   str.size();
       if ( len1!='\0'){
        cout << " " ;
       }
    }

    // cout << word ;
    
   return 0;
}