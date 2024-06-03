#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin >> n;
char str[n];
cin.getline(str,1200);
//getline(cin,str) // string

for(int i=0; i<n; i++){
    cin >> str[i] ;
}

int countChar[100001] ;//1 means null will stop the print

for(int i=0; str[i]!='\0'; i++){
    int low = str[i] - 'a' ;//97-97 = 0
    countChar[low]++ ;
}

for(char i='a'  ; i<='z'; i++){
       int index = i - 'a' ; // 97 - 97 =0 =>  98-97 = 1 indexes
       cout << 
     if(countChar[index] > 0 ){
        cout <<  i  << ":" << countChar[index]  << " " ;
     }
}

// [f,d,c] => 0 1 2 index


return 0;
}


//str.begin() , str.end() , str.earase(remove(),str.end())
