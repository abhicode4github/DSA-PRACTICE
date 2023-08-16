OBJECTIVE- 
CPP Program to find the multiple missing element from the given array .


#include<iostream>
using namespace std;

void MultipleMissingElement(int A[],int n)
{
    int l=A[0];
    
    int diff=l-0;
    
    for(int i=0;i<n;i++)
    {
        if(A[i]-i!=diff)
        {
            while(diff<A[i]-i)
            {
                cout<<"Missing elements is : "<<i+diff<<endl;
                
                diff++;
            }
        }
    }
}

int main()
{
    int A[]={6,7,8,9,11,12,15,16,17,18,19};
    
    int n=sizeof(A)/sizeof(A[0]);
    
    MultipleMissingElement(A,n);
    
    return 0;
}


//////// OUTPUT 
Missing element is: 10
Missing element is: 13
Missing element is: 14
