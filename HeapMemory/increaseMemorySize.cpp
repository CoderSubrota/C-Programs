#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout << "Enter array size" << endl ;
cin >> n ;

char * arrayString = new char[n] ;
char * secondStringArray = new char[n];


for(int i=0; i<n; i++){

    cin >> arrayString[i] ;
}

for(int i=0; i<n; i++){
  secondStringArray[i] = arrayString[i] ; // a to b
}

delete [] arrayString ; // a clear

int increaseMomoy;
cout << "Enter memory size to increase "<<endl ;
cin >> increaseMomoy ;

arrayString = new char[n+increaseMomoy] ; //A array is clear so that, I need to increase memory size

for (int i=0; i<n ; i++) { // b to a copy
    arrayString[i] = secondStringArray[i];
}

delete [] secondStringArray; //only one array exist that was deleted first

cout << "Enter new elements to new size" << endl;
for(int i=n; i<n+increaseMomoy; i++ ) //4 => + 3 =>  4+3 =>  i < 7
{
    cin >> arrayString[i] ;
}

cout << "Your total memory size" << " = " << n+increaseMomoy << endl;

cout << "Your final elements for"  << " = "  <<  n+increaseMomoy << " memory size" << endl;
cout << "Output => " << endl;
for(int i=0; i<n+increaseMomoy; i++){
    cout << arrayString[i] ;
    //add space until the elements is null after the index shown
    if(arrayString[i]!='\0'){
        cout << " " ;
    }

}
return 0;
}
