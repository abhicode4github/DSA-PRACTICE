#include<iostream>
using namespace std;

int Get(int arr[],int length,int index)
{
    
    
    if(index>=0 && index<length)
    {
        return arr[index];
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    
   

    int result = Get(arr,length,3);

    if (result != -1)
        cout << "Element found at input index is : " << result << endl;
    else
        cout << "index input is incorrect." << endl;

    return 0;
}

//////  OUTPUT 

Element found at input index is : 5





/// Program for Get() function so that index input by the user.    



// program  

#include<iostream>
using namespace std;

int Get(int arr[],int length,int index)
{
    
    
    if(index>=0 && index<length)
    {
        return arr[index];
    }
    else
    {
        return -1;
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    
    int length = sizeof(arr) / sizeof(arr[0]);
    
    int userIndex;
    
    cout<<"Enter an index: ";
    cin>>userIndex;
    
   

    int result = Get(arr,length,userIndex);

    if (result != -1)
        cout << "Element found at input index is : " << result << endl;
    else
        cout << "index input is incorrect." << endl;

    return 0;
}

// //// OUTPUT 

Enter an index : 6 
Element found at input index is : 8




///// PROGRAM for Get() function so that array can be input by the user  . 

// PROGRAM 

#include<iostream>
using namespace std;

int Get(int arr[], int length, int index) {
    if (index >= 0 && index < length) {
        return arr[index];
    } else {
        return -1;
    }
}

int main() {
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;

    int arr[length];  // Declare an array with user-provided length
    
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < length; i++) {
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }
    
    int userIndex;
    cout << "Enter an index: ";
    cin >> userIndex;
    
    int result = Get(arr, length, userIndex);

    if (result != -1)
        cout << "Element found at input index is : " << result << endl;
    else
        cout << "Index input is incorrect." << endl;

    return 0;
}

////// OUTPUT  

Enter the length of the array : 5 
Enter the elements of the array : 
Element 0 : 2
Element 1 : 4
Element 2 : 9
Element 3 : 6
Element 4 : 7
Enter an index : 3 
Element found at input index is : 6



