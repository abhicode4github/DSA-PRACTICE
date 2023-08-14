OBJECTIVE -
In this cpp program we have to make -ve numbers on one side and the +ve numbers on the other side .

#include <iostream>
using namespace std;

void ArrangeArray(int A[],int size)
{
    int i=0;
    int j=size-1;
    
    while(i<j)
    {
        while(A[i]<0)
        {
            i++;
        }
        while(A[j]>=0)
        {
            j--;
        }
        if(i<j)
        {
            swap(A[i],A[j]);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter the size of the array : ";
    cin>>size;
    
    int A[size];
    
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
    }
    
    cout<<"The original array is : ";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    
    ArrangeArray(A,size);
    
    cout<<"\nThe array after the arrangement is : ";
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
    
}


///// OUTPUT 

Enter the size of the array : 6
Enter the elements of the array : 
-3
2
-4
6
-8
9
The original array is : -3 2 -4 6 -8 9 
The array after the arrangement is : -3 -8 -4 6 2 9
