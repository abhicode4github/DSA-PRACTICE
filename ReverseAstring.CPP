#include<iostream>
#include<string>
using namespace std;

void ReversingString(char name[]) {
    string reversed = "";
    
    for (int i = 0; name[i] != '\0'; i++) {
        reversed = name[i] + reversed;
    }
    
    cout << "The reversed string is: " << reversed << endl;
}

int main() {
    char name[] = "Nikita";
    
    ReversingString(name);
    return 0;
}

//////// OUTPUT 
The reversed string is : atikiN





