#include <iostream>
#include <string>

class ClassA {

public:
   std::string objA;
};

class ClassB {
private:
    std::string dataB;
public:
    void setDataB(std::string value) {
        dataB = value;
    }

    std::string getDataB() {
        return dataB;
    }
};

class ClassC {
private:
    float dataC;
public:
    void setDataC(float value) {
        dataC = value;
    }

    float getDataC() {
        return dataC;
    }
};

int main() {
    // Create objects of each class
    ClassA A;
    ClassB objB;
    ClassC objC;

    // Set data for each object
    A.objA = 10;
    objB.setDataB("Hello, World!");
    objC.setDataC(3.14f);

    // Get and display data from each object
    std::cout << "Data in ClassA: " << objA.getDataA() << std::endl;
    std::cout << "Data in ClassB: " << objB.getDataB() << std::endl;
    std::cout << "Data in ClassC: " << objC.getDataC() << std::endl;

    return 0;
}
