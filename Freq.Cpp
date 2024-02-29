// count frequency of a number 

#include<iostream>
using namespace std;

int Frequency(long num, int k) {
    int count = 0;
    
    while(num > 0) {
        if(num % 10 == k) {
            count++;
        }
        num = num / 10; 
    }
    
    return count;
}

int main() {
    long Num;
    cout << "Enter a number: ";
    cin >> Num;
    
    int digit;
    cout << "Enter the digit to find the frequency: ";
    cin >> digit;
    
    cout << "The frequency of " << digit << " in " << Num << " is " << Frequency(Num, digit) << endl;
    
    return 0;
}
