#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int marks;
    int roll;
};

int main()
{
    int n;
    cin >> n;
    Student Arr[n];
    //
    Student mx;
    mx.roll = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i].name;
        cin >> Arr[i].marks;
        cin >> Arr[i].roll;
    }

    for (int i = 0; i < n; i++)
    {
        if (Arr[i].roll > mx.roll)
        {
            mx = Arr[i];
        }
    }

    cout << mx.name << " " << mx.marks << " " << mx.roll;
    return 0;
}