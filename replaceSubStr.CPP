#include <iostream>
using namespace std;

void replaceSubstring(string& str,  string& searchStr, string& replaceStr) {
    size_t pos = 0;
    while ((pos = str.find(searchStr, pos)) != string::npos) {
        str.replace(pos, searchStr.length(), replaceStr);
        pos += replaceStr.length();
    }
}

int main() {
    string sentence, searchStr, replaceStr;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    cout << "Enter the string to search for: ";
    getline(cin, searchStr);

    cout << "Enter the string to replace it with: ";
    getline(cin, replaceStr);

    replaceSubstring(sentence, searchStr, replaceStr);

    cout << "Modified sentence: " << sentence <<endl;

    return 0;
}




