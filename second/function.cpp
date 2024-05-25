#include<bits/stdc++.h>
using namespace std;
int * myFunc(int sizeNum){
    int * arrayNum = new int[sizeNum] ;
for(int i=0; i<sizeNum; i++){
   cin >> arrayNum[i] ;
}
return arrayNum;
}
int main(){

int sizeNum;
cin >> sizeNum ;
int * callMyFunc = myFunc(sizeNum) ;

for(int i=0; i<sizeNum; i++) {
    cout << callMyFunc[i] << endl ;
}
delete [] callMyFunc ;
return 0;
}
