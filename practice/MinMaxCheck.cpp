#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    // max
    int maxNumber = 0;
    if (a > b && a > c)
    {
        maxNumber = a;
    }
    else if (b > c && b > a)
    {
        maxNumber = b;
    }
    else
    {
        maxNumber = c;
    }
    // min
    int minNumber = 0;
    if (a < b && a < c)
    {
        minNumber = a;
    }
    else if (b < c && b < a)
    {
        minNumber = b;
    }
    else
    {
        minNumber = c;
    }
    cout << minNumber << " ";
    cout << maxNumber;

    return 0;
}