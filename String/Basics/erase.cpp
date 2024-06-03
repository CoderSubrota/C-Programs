#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    str.insert(5, " world");
    str.replace(0, 5, " power");
    str.erase(0,2) ;
    cout << str<<endl;

        string mystring = "Hello, World!";
        int count = 0 ;
    for (auto it = mystring.begin(); it != mystring.end(); ++it)
      {  cout << *it; count+=1;}
       cout << endl;
      cout << count <<endl; 

//
for(auto st=str.begin(); st!=str.end(); st++){
  cout << *st ;//dereference
}
      cout << endl;

mystring.erase(remove(mystring.begin(),mystring.end(), ','),mystring.end()) ;
cout << mystring << endl; 
if(str==mystring){
    cout << "ok" ;
}else{
    cout <<"Not ok" ;
}
    return 0;
}