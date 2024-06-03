#include <bits/stdc++.h>
using namespace std;
string replaceString(string& str, string& toReplace ){

    string result;

    int len  = str.size() ;
    int toReplaceLen = toReplace.size() ;

    for(int i=0; i<len;){
        bool match=true;
        for(int j=0; j<toReplaceLen; j++){
            //rahim = good // fantastic = good // good = #
            if( i + j >= len  || str[i + j] !=toReplace[j]){
                 match = false;
            }
        }

        if(match){
            result +="#";
            i+=toReplaceLen;
        }else{
            result +=str[i] ;
            i++;
        }
    }
    
    return result ;
} 
int main()
{
int t; 
cin >> t;

for(int i=1; i<=t; i++){
string S;
string X;
cin >> S;
cin >> X;
// cout << S << " " << X ;
string result  = replaceString(S,X) ;
cout << result <<endl;
}
 return 0;
}