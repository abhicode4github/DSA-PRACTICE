OBJECTIVE -
CPP Program to find the single missing element in a array of a sequence of natural numbers . 

#include<iostream>
using namespace std;

void SingleMissingElement(int A[],int n)
{
    int sum=0;
    
    for(int i=0;i<11;i++)
    {
        sum=sum+A[i];
    }
    
    int s=n*(n+1)/2;
    
    int missingNum=s-sum;
    
    cout<<"Missing element is "<<missingNum;
}

int main()
{
    int A[]={1,2,3,4,5,6,8,9,10,11,12};
    
    int size=sizeof(A)/sizeof(A[0]);
    
    int n=A[size-1];
    
    SingleMissingElement(A,n);
    
    return 0;
    
}

//////// OUTPUT 
Missing element is 7
