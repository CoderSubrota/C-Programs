#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,d,e,f;
cin >> a>> b >> c >> d >> e >> f ;
int maxNumber = max({a,b,c,d,e,f});
int minNumber = min({a,b,c,d,e,f});
cout << maxNumber << " " << minNumber ;
}