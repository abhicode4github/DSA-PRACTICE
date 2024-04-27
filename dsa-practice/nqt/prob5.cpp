A chocolate factory is packing chocolates into packets. The chocolate packets here represent an array of N numbers of integers 
values. 
The task is to find the empty packets(0) of chocolates and push it to the end of the conveyer belt. 

  example 
  n=8
  arr=[4,5,0,1,9,0,5,0]
  output = 4 5 1 9 5 0 0 0 

-------------------------------------------------------------------------------------------------------------------------------
  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int j=0;
    
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[i],arr[j]);
            j++;
        }
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
    
}
