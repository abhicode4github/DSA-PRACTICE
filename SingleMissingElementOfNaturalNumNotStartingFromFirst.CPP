OBJECTIVE-
CPP Program to find the single missing element when we are not given an array of natural number starting from the first number.



//PROGRAM 

#include<iostream>
using namespace std;

void SingleMissingElementOfNaturalNumNotStartingFromFirst(int A[],int n)
{
   int l=A[0];
   
   int diff=l-0;
   
   for(int i=0;i<n;i++)
   {
       if(A[i]-i!=diff)
       {
           cout<<"Missing element is:" <<i+diff;
           break;
       }
   }
}

int main()
{
    int A[]={6,7,8,9,10,11,13,14,15,16,17};
    
    int n=sizeof(A)/sizeof(A[0]);
    
    
    SingleMissingElementOfNaturalNumNotStartingFromFirst(A,n);
    
    return 0;
    
}



//// OUTPUT  
Missing element is:12
