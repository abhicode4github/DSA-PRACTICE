#include<iostream>
using namespace std;

int main()
{
	string s1, s2;
	cout << "Enter string: ";
	cin >> s1;

	for (int i = s1.length()-1; i >= 0; i--)
	{
		s2 += s1[i];
	}

	if (s1 == s2)
	{
		cout << "Palindrome!" << endl;
	}
	else
	{
		cout << "Not Palindrome!" << endl;
	}

	return 0;
}

//// OUTPUT 
Enter string : madam 
Pallindrome!
