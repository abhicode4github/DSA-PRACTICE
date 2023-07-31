// 
#include<iostream>

using namespace std;

struct Array 
{
    int A[10];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    cout<<"Elements are :"<<endl;
    for(i=0;i<arr.length;i++)
    {
        cout<<arr.A[i];
    }
}
 
int LinearSearch(struct Array arr,int key)
{
    int i,x;
    for(i=0;i<arr.length;i++)
    {
        if(key==arr.A[i])
        {
            x=i;
            return x;
            
        }
    }
    return 0;
}


int main()
{
    struct Array arr={{2,3,4,5,6},10,5};
    
   cout<<LinearSearch(arr,4)<<endl;
    
    Display(arr);
    
    return 0;
    
}
