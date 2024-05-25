#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char s;
    int  b ;
    char s2;
    int c ;
    cin >> a >> s >> b >> s2  >> c;


    if (s == '+')
    {
        int result = a + b;

        if (result == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
    else if (s == '-')
    {
        int result = a - b;
        if (result == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << result << endl;
        }
    }
        else if (s == '/')
        {
            int result = a / b;
            if (result == c)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << result << endl;
            }
        }
        else
        {
            int result = a * b;
            if (result == c)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << result << endl;
            }
        }
        return 0;
    }