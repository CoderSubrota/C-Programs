#include<bits/stdc++.h>
using namespace std;
int main(){
int n ;
cin >> n ;
int array[n] ;
for(int i=0; i<n; i++) {
cin >> array[i] ;
}
for(int i=0; i<n; i++) {
cin >> array[i] ;
}
int maxIndex = array[0] ;

for(int i=0; i<n; i++) {
if(maxIndex <  array[i]){
    maxIndex= array[i] ;
}
}

cout << maxIndex; 

return 0;
}