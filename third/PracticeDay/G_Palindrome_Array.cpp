#include <bits/stdc++.h>
using namespace std;
void palindrome(long long int n , long long int array[]){
    int flag = 0;

 for(int i=0; i<=n/2  && n!=0; i++){ //i <= 6/2=> 3
    if(array[i] != array[n-i-1]) {
        flag=1;
        break;
    }
 }

 if(flag==1){
    cout << "NO"<<endl; 
 }else {
    cout << "YES"<<endl; 
 }
}
int main() {
long long  int n;
 cin >> n;
long long  int array[n] ;
 for(int i=0; i<n; i++){
    cin>>array[i] ;
 }
palindrome(n,array) ;
   return 0;
}

//0 1 2 3 4 -> 4 3 2 1 0 => n-1 -> 4 n-i-1 