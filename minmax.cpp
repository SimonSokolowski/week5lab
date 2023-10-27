#include <iostream>

int main() {

    int store[10] = {};

    std::cout << "please enter random numbers: ";

    int x = 0; int min = 100; int max = 0;

    for (int i = 0; i < 10; i++) {
        std::cin >> x;
        store[i] = x;
        if (x < min) {
            min = x;
        } else if (x > max) {
            max = x;
        }
    }

    std::cout << min << " " << max;

    return 0;
}