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
