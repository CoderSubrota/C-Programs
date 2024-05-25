#include <iostream>
#include <array>

int main() {
    std::array<int, 10> arr;  // std::array

    for (int i = 0; i < arr.size(); ++i) {
        arr[i] = i * 2;
    }

    std::cout << "std::array values: ";
    for (int i = 0; i < arr.size(); ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
