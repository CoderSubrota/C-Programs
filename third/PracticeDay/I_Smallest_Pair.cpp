#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        int A[N];

        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }

        int min_sum = INT_MAX;

        for (int i = 0; i < N - 1; i++)
        { // 3
            for (int j = i+1; j < N; j++)
            { // 4
                int sum = A[i] + A[j] + j - i;
                if (sum < min_sum)
                {
                    min_sum = sum;
                }
            }
        }

        cout << min_sum << endl;
    }

    return 0;
}