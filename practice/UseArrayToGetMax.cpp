#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n ;
int array[n];
for(int i=0;i<n; i++){
    cin>>array[i] ;
}
int maxNum = 0 ;
for(int i=0;i<n; i++){
maxNum =  max({array[i]});
}

cout << maxNum;

    return 0;
}