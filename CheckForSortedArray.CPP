OBJECTIVE-
In this CPP Program we have to check whether the elements of the array input by the user is in Sorted order or not.

#include <iostream>
using namespace std;

int CheckForSorted(int A[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        if(A[i]>A[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cout<<"Enter the number of elements of the array: ";
    cin>>n;
    
    int A[n];
    
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    
    cout<<"The given array is : ";
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<" ";
    }
    
    
   if (CheckForSorted(A, n)) {
        cout << "\nThe array is sorted." << endl;
    } else {
        cout << "\nThe array is not sorted." << endl;
    }

    return 0;
}

/// OUTPUT 

Enter the number of elements of the array : 5
Enter the elements of the array : 3
4
9
2
5
The given array is : 3 4 9 2 5 
The array is not sorted.
