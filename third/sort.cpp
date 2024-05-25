#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int array[n];
    for(int i=0; i<n; i++){
        cin>>array[i] ;
    }
    //accending order
    sort(array,array+n) ;

    for(int i=0; i<n; i++){
        cout << array[i] << " " ;
    }
    cout  << endl;
    //deccending order
    sort(array,array+n,greater<int>()) ;
        for(int i=0; i<n; i++){
        cout << array[i] << " " ;
    }
   return 0;
}