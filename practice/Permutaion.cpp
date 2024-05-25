#include<iostream>
using namespace std;
int main(){
int a,b,c;
cin >> a >> b >> c;

cout << a +b << endl ;
cout << a*c << endl ;

cout << b+a << endl ;
cout << b*c << endl ;

cout << c +b << endl ;
cout << c*a << endl ;
int d = abs( b - a ) ;
long long int sum = 1;
cout << endl;
for(int i=1 ; i<=d; i++){
 sum = sum * b - i;
}
cout << sum ;
//ab ac ba bc  ca cb 
//15 6
//15-6 = 9 
//6p2 // 6c3 / 15 C 12/ 15 C 15-12 
return 0;
}