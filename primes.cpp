#include <iostream>

int main() {
    std::cout << "enter an integer: ";
    int x;
    std::cin >> x;
    bool prime = false;

    for (int i = 1; i <= x; i++) {
        for (int j = 3; j*j <= x; j+=2) {
            if (!(i % j == 0)) {
                prime = true;
                break;
            }
        }
        if (prime) {
            std::cout << x << " ";
        }
    }

    return 0;
}