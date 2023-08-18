#include<iostream>
#include<string>
using namespace std;

void CompareStrings(char A[],char B[])
{
    int i,j;
    
    for(i=0,j=0;A[i]!='\0' && B[j]!='\0';i++,j++)
    {
        if(A[i]!=B[j])
        {
            break;
        }
    }
        if(A[i]==B[j])
        {
            cout<<"equal strings ";
        }
        else if(A[i]<B[j])
        {
            cout<<"smaller string";
        }
        else 
        {
            cout<<"Greater string ";
        }
}

int main()
{
    char A[]="painter";
    char B[]="painting";
    
    CompareStrings(A,B);
    
    return 0;
}

//// OUTPUT 
smaller string 
