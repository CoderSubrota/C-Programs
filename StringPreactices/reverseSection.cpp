#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int clas;
    string section;
    int id;
};

int main()
{
    int N;
    cin >> N;

    Student array[N];

    for (int j = 0; j < N; j++)
    {
        getchar();
        cin >> array[j].name;
        cin >> array[j].clas;
        cin >> array[j].section;
        cin >> array[j].id;
    }

for(int i=0; i<N; i++){
    for(int j=i+1; j<N; j++){
        swap(array[i].section,array[j].section) ;
    }
}

    for (int j = 0; j < N; j++)
    {
        cout << array[j].name << " " << array[j].clas << " " << array[j].section << " " << array[j].id << endl;
    }


    return 0;
}