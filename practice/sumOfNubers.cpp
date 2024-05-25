#include<iostream>
using namespace  std;
int main(){
int size;
cin >> size;
int array[size];
for(int i=0; i<size; i++){
    cin >> array[i];
}
//s= n/2 {2a+(n-1)*d}
int a = array[0] ; // 122
int n = array[size-1]; // 0 4 => 5 - 1 => 4
int d = n - a ;
int podoSonkha = (n - a /d) + 1 ; 
int sum =((podoSonkha/2)*2*a+podoSonkha-1*d); //sumosti

cout << sum ; 

return 0 ;
}