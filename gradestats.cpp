#include <iostream>

int main() {
    int grade;
    int grades[100] = {};
    int arrayCount = 0;
    double average;
    int sum = 0;

    do {
        std::cout << "input grade ";
        std::cin >> grade; 
        grades[arrayCount] = grade;
        arrayCount++;
    } while (grade != -1);
    
    grades[arrayCount-1] = 0;
    arrayCount--;

    for (int i = 0; i < 100; i++) {
        sum += grades[i];
    } 

    average = sum / arrayCount;

    std::cout << average;

    return 0;
}