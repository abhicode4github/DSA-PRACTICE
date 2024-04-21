given an array of integers , find an index such that the sum of elements at lower indexes is equal at higher indexes . if no such 
exiss , return -1.
  for example , 
  consider the array [-7,1,5,2,-4,3,0]
  index 3 , is an equilibrium index, because the sum of elements on the left , -7+1+5=-1 , is equal to the sum of elements on the 
right -4+3+0=-1 

  -------------------------------------------------------------------------------------------------------------------------------

  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    int leftsum[n];
    int rightsum[n];
    int equiidx=-1;
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int left=0;
    for(int i=0;i<n;i++)
    {
        leftsum[i]=left;
        left+=arr[i];
    }
    
    int right=0;
    for(int i=n-1;i>=0;i--)
    {
        rightsum[i]=right;
        right+=arr[i];
    }
    
    for(int i=0;i<n;i++)
    {
        if(leftsum[i]==rightsum[i])
        {
            equiidx=i;
            break;
        }
    }
    
    cout<<equiidx;
    
    return 0;
    
}
