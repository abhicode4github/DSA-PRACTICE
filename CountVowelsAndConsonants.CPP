#include<iostream>
using namespace std;

void CountVowelAndConsonants(char A[])
{
    int i;
    int vowelCount=0;
    int consonantCount=0;
    
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]=='a'|| A[i]=='e'|| A[i]=='i'|| A[i]=='o'|| A[i]=='u'|| A[i]=='A'||A[i]=='E'||A[i]=='I'||
        A[i]=='O'||A[i]=='U')
        {
            vowelCount++;
        }
        else if((A[i]>=65 && A[i]<=90)||(A[i]>=97 && A[i]<=122))
        {
            consonantCount++;
        }
    }
    
    cout<<"The total number of vowels are : "<<vowelCount<<endl;
    cout<<"The total number of consonants are : "<<consonantCount<<endl;
}
 
 
 int main()
 {
     char A[]="How are you";
     
     CountVowelAndConsonants(A);
     
     return 0;
 }

///////// OUTPUT 
The total number of vowels are : 5 
The total number of consonants are : 4
