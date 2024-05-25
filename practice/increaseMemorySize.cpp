#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int *A = new int[n];
    int *B = new int[n];
//A = new int[10] ;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < n; i++)
    {
        B[i] = A[i];
    }
    delete[] A;
    int newSize;
    cin >> newSize;

    A = new int[newSize];

    for (int i = 0; i < n; i++)
    {
        A[i] = B[i];
    }

    delete[] B;
//5 -> i < 7
    for (int i = n; i < newSize; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < newSize; i++)
    {
        cout << A[i];
        if (A[i] != '\0')
        {
            cout << " ";
        }
    }
}