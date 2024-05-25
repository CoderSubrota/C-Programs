#include <bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin >> t;
for(int i=1; i<=t; i++){
        int n, s;
    cin >> n >> s;
    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }

   int flag =0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
             for(int k=j+1; k<n; k++){
                if(array[i]+array[j]+array[k] == s ){
                 flag=1;
                 break;
                }
             }
        }
    }
    if(flag==0){
        cout << "NO" << endl;
    }else{
        cout << "YES" << endl;
    }
}
    return 0;
}