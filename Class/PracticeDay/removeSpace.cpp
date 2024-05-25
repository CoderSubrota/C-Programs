#include <bits/stdc++.h>
using namespace std;

int main() {
   string str;

   while (getline(cin, str))
   {
    sort(str.begin(), str.end());
     str.erase(remove(str.begin(), str.end(), ' '), str.end());
    cout << str << endl;
   }
   
    return 0;
}
//string

//erase(remove(str.begin(), str.end(), ' ' ),str.end())