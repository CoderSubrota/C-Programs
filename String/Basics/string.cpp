#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);

    cout << str[0] << endl;
    cout << str[str.size() - 1] << endl;
    cout << "Back=" << str.back() << endl;
    cout << "Front=" << str.front() << endl;
    cout << "At=" << str.at(2) << endl;
    str.resize(5);
    cout << str << endl;
    str.resize(6);
    str.append("man");
    cout << str << endl;
    cout << str.max_size() << endl;
    cout << str.capacity() << endl;
   str.push_back('d') ;
   str.pop_back() ;
   str.assign("good") ;
      str.replace(0,2,'good') ;
    cout << str << endl; 
    str.clear();
   if(str.empty()==true){
    cout << "String is null";
   }else{
    cout << "String is not null";
   }
    return 0;
}