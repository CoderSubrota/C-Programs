#include<bits/stdc++.h>
using namespace std;
int main() {

int * num = new int ;
cin >> *num;
cout << *num << endl ;

int n ;
cin >> n ;

int* arrayNum = new int[n];

for(int i=0; i<n; i++){
    cin >> arrayNum[i];
}

for(int i=0; i<n; i++){
    cout << " Dynamic array element = " << arrayNum [i] << endl;
}
return 0;
}

