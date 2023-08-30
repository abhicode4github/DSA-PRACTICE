#include <iostream>
using namespace std;

int factorial(int num) {
    if (num <= 1) {
        return 1;
    }
    return num * factorial(num - 1);
}

int main() {
    int a, b;
    
    cout << "Enter the value of a: ";
    cin >> a;
    
    cout << "Enter the value of b: ";
    cin >> b;
    
    int factorial_a = factorial(a);
    int factorial_b = factorial(b);
    
    int difference = factorial_a - factorial_b;
    
    cout << "Factorial of " << a << ": " << factorial_a << endl;
    cout << "Factorial of " << b << ": " << factorial_b << endl;
    cout << "Difference between factorial of " << a << " and " << b << ": " << difference << endl;

    return 0;
}
