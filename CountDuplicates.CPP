#include<iostream>
using namespace std;

void CountDuplicates(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i]==A[i+1])
        {
            int j=i+1;
            
            while(A[j]==A[i])
            {
                j++;
            }
            
            cout<<A[i]<<" is appearing "<<j-i<<" times"<<endl;
            i=j-1;
        }
    }
}

int main()
{
    int A[]={3,6,8,8,10,12,15,15,15,20};
    
    int n=sizeof(A)/sizeof(A[0]);
    
    CountDuplicates(A,n);
    
    return 0;
}

//// OUTPUT 

8 is appearing 2 times 
15 is appearing 3 times
