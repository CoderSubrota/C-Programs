#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n];

    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    int count[26] = {0};

    for (int i = 0; i < n; i++)
    {
        int index = str[i] - 'a'; // 0 1 2
        count[index]++;
    }

    for (char i = 'a'; i <= 'z'; i++)
    {
        int index = i - 'a'; // 0 1 2
        if (count[index] > 0)
        {
            cout << i << " : " << count[index] << " ";
        }
    }
    return 0;
}