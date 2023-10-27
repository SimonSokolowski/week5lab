#include <iostream>

int main() {

    std::cout << "enter two numbers: ";
    
    int x;
    int y;
    int sum = 0;

    std::cin >> x >> y;

    for (int i = x; i <= y; i++) {
        sum += i;
    }

    std::cout << sum;

    return 0;
}