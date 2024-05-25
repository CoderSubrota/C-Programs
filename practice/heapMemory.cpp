#include <bits/stdc++.h>
using namespace std;
int *get_array(int n)
{
    int *array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    return array;
}
int main()
{
    int n;
    cin >> n;
    int *callArray = get_array(n);
    for (int i = 0; i < n; i++)
    {
        cout << callArray[i];
        if (callArray[i] != '\0')
        {
            cout << " ";
        }
    }

    delete[] callArray;

    return 0;
}