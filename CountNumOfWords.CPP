#include<iostream>
using namespace std;

void CountNumOfWords(char A[])
{
    int i;
    int word=1;
    for(i=0;A[i]!='\0';i++)
    {
        if(A[i]==' ')
        {
            word++;
        }
    }
    
    cout<<"The total number of words are : "<<word<<endl;
}
 
 
 int main()
 {
     char A[]="How are you";
     
     CountNumOfWords(A);
     
     return 0;
 }


///////// OUTPUT 
The total number of words are : 3
