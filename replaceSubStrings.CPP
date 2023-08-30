#include <iostream>
#include <string>

void replaceSubstring(std::string& text, const std::string& old_substring, const std::string& new_substring) {
    size_t pos = text.find(old_substring);

    while (pos != std::string::npos) {
        text.replace(pos, old_substring.length(), new_substring);
        pos = text.find(old_substring, pos + new_substring.length());
    }
}

int main() {
    std::string text, old_substring, new_substring;

    std::cout << "Enter the text: ";
    std::getline(std::cin, text);

    std::cout << "Enter the old substring to replace: ";
    std::getline(std::cin, old_substring);

    std::cout << "Enter the new substring: ";
    std::getline(std::cin, new_substring);

    replaceSubstring(text, old_substring, new_substring);

    std::cout << "Text after replacement: " << text << std::endl;

    return 0;
}
