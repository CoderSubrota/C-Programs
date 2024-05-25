#include <bits/stdc++.h>
using namespace std;
int main() {
char S[100001] ;

  while (cin.getline(S,800))
  {
   
    S.erase(remove(S.begin(), S.end(), ' '), S.end());

    int len = strlen(S)  ;
    
   sort(S,S+len);
    
  cout << S <<endl  ;}

   return 0;
}