OBJECTIVE-
In this CPP Program we need to Insert a new element inside the sorted array .

#include <iostream>
using namespace std;

void InsertNewElement(int A[],int size,int elementToInsert)
{
    int i;
    
    i=size-1;
    
    while(i>=0 && A[i]>elementToInsert)
    {
        A[i+1]=A[i];
        i--;
    }
    
    A[i+1]=elementToInsert;
}

int main()
{
    
    int elementToInsert;
    cout<<"Enter the element to insert: ";
    cin>>elementToInsert;
    
    
    int size;
    
    cout<<"Enter the size of the Array: ";
    cin>>size;
    
    int A[size];
    
    cout<<"Enter "<<size<<" elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>A[i];
        
    }
    
    cout<<"The original array is :";
    
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    
    
    
    InsertNewElement(A,size,elementToInsert);
    size++;
    
    
    cout<<"\nArray after inserting new element is : ";
    
    for(int i=0;i<size;i++)
    {
        cout<<A[i]<<" ";
    }
    
    return 0;
    
}

///// OUTPUT 

Enter the element to insert : 5 
Enter the size of the  array : 5
Enter 5 elements:3
4
6
7
8
The original array is : 3 4 6 7 8 
Array after inserting new element is : 3 4 5 6 7 8
