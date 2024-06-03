#include <bits/stdc++.h>
using namespace std;

int main() {
    char str[100001];

    while (cin.getline(str, 100001)) {
        // Remove spaces from the string
        int len = strlen(str) ;
           
        // Sort the string without spaces

        sort(str, str + len);

        // Print the sorted string
        cout << str << endl;
    }
    
    return 0;
}
