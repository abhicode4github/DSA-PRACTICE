#include <iostream>
#include <string>

using namespace std;

char findMostFrequentVowel(const string& str) {
    int vowelCount[5] = {0}; 

    for (char c : str) {
        if (c == 'a' || c == 'A') {
            vowelCount[0]++;
        } else if (c == 'e' || c == 'E') {
            vowelCount[1]++;
        } else if (c == 'i' || c == 'I') {
            vowelCount[2]++;
        } else if (c == 'o' || c == 'O') {
            vowelCount[3]++;
        } else if (c == 'u' || c == 'U') {
            vowelCount[4]++;
        }
    }

    int maxCount = -1;
    int maxVowelIndex = -1;

    for (int i = 0; i < 5; ++i) {
        if (vowelCount[i] > maxCount) {
            maxCount = vowelCount[i];
            maxVowelIndex = i;
        }
    }

    char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    return vowels[maxVowelIndex];
}

int main() {
    string input;
    cout << "Enter a string of lowercase alphabets and spaces: ";
    cin>>input;

    char mostFrequentVowel = findMostFrequentVowel(input);
    cout << "The vowel that occurs the most is: " << mostFrequentVowel <<endl;

    return 0;
}
