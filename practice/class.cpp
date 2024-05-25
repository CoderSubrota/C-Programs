#include<iostream>
using namespace std; 

class MyClass {
public:
    static int staticVar;
    static void staticMethod() {
        cout << "Static method called" << endl;
    }
};

// Definition of the static member variable
int MyClass::staticVar = 0;

int main() {
    // Accessing the static member variable
    MyClass::staticVar = 5;
    cout << "Static variable: " << MyClass::staticVar << endl;

    // Calling the static member function
    MyClass::staticMethod();

    return 0;
}
