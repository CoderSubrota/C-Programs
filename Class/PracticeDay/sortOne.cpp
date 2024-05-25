#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char str[n+1];

     std::cin>>str;

    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (str[j] > str[j + 1])
            {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }

    cout << str;

    return 0;
}
