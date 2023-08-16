OBJECTIVE-
CPP Program to find the duplicates in the given array .




/// PROGRAM 

#include<iostream>
using namespace std;

void FindDuplicate(int A[],int n)
{
    int lastDuplicate=0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]==A[i+1] && A[i]!=lastDuplicate)
        {
           
            lastDuplicate=A[i];
            cout<<"\nThe Duplicates are: "<<A[i];
        }
       
    }
     
}

int main()
{
    int A[]={3,6,8,8,10,12,15,15,15,20};
    
    int n=sizeof(A)/sizeof(A[0]);
    
    FindDuplicate(A,n);
    
    return 0;
}


//// OUTPUT 
The Duplicates are : 10
The Duplicates are : 15
