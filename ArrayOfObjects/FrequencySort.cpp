#include <bits/stdc++.h>
using namespace std;

class Freq
{
public:
    char value;
    int count;
};

bool compaire(Freq a, Freq b){
 if(a.count == b.count) {
    return a.count < b.count;
 }else {
    return a.count > b.count ;
 }
}
int main()
{
    string s;
    cin >> s;

    Freq f[26];

    for (int i = 0; i < 26; i++)
    {
        f[i].value = i  + 97;
        f[i].count = 0;
    }



    for (char c : s)
    {
        int ascii = c - 97;
        f[ascii].count++;
    }

  sort(f,f+26,compaire) ;

    for (int i = 0; i < 26; i++)
    {

        if (f[i].count > 0)
        {
            cout << f[i].value << " : " << f[i].count;
            cout << endl;
        }
    }
    return 0;
}