#include <bits/stdc++.h>
using namespace std;
int main() {
    string str ;
    getline(cin,str) ;

    stringstream ss(str) ;
    int count = 0 ;
    string word;
    while (ss>>word)
    {
        // cout << word << endl; 
        if(word != "..." ) { count++;}

    }
    
    cout << count << endl ;
   return 0;
}