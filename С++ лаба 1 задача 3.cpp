#include <iostream>

int getProductOfDigits(int number) {
    int product = 1;
    while (number != 0) {
        int digit = number % 10;
        product *= digit;
        number /= 10;
    }
    return product;
}

int main() {
    int m, n;
    setlocale(LC_ALL, "Russian"); 

    // Ввод значений m и n
    std::cout << "Введите значение m: ";
    std::cin >> m;
    std::cout << "Введите значение n: ";
    std::cin >> n;

    int k = m + 1;
    while (getProductOfDigits(k) <= n) {
        k++;
    }

    std::cout << "k = " << k << std::endl;

    return 0;
}

