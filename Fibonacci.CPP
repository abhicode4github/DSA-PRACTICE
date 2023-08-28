#include <iostream>

int main() {
    int n;
    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    int first = 0, second = 1;

    std::cout << "Fibonacci series up to " << n << " terms: ";

    if (n >= 1)
        std::cout << first;

    for (int i = 2; i <= n; ++i) {
        std::cout << ", " << second;
        second = first + second;
        first = second - first;
    }

    std::cout << std::endl;

    return 0;
}
