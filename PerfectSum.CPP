#include<iostream>
#include<vector>

using namespace std;

void findSubsetsWithSum(int arr[],int targetSum,vector<int>&current,int index,int currentSum)
{
    if(currentSum==targetSum)
    {
        for(int i=0;i<current.size();i++)
        {
            int num=current[i];
            cout<<num<<" ";
        }
        cout<<endl;
        return;
    }
    if(index==0 || currentSum>targetSum)
    {
        return;
    }
    
    findSubsetsWithSum(arr,targetSum,current,index-1,currentSum);
    
    current.push_back(arr[index-1]);
    
    findSubsetsWithSum(arr,targetSum,current,index-1,currentSum+arr[index-1]);
    
    current.pop_back();
    
}
    
    void printSubsetwithSum(int arr[],int size,int targetSum)
    {
        vector<int> current;
        
        findSubsetsWithSum(arr,targetSum,current,size,0);
    }

int main()
{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int targetSum;
    
    cout<<"Enter the target sum:";
    cin>>targetSum;
    
    cout<<"Subsets with sum"<<targetSum<<":"<<endl;
    printSubsetwithSum(arr,n,targetSum);
    
    return 0;
}
