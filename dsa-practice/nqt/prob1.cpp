Consider the following series :
1,1,2,3,4,7,8,15,9,24,16,40,32,72,104,.......................

  this series is mixture of series-
  - all prime positions values are power of 2
  - all perfect square positions are power of 3
  - remaining positions are sum of previous 2 values 

if n=15 , the 15th term in the series is 104 
, so only value 104 should be printed 

---------------------------------------------------------------------------------------------------------------------------------------------------------------------------

  #include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    unordered_map<int,bool> mp;
    
    mp[2]=true;
    mp[3]=true;
    mp[5]=true;
    mp[7]=true;
    mp[11]=true;
    mp[13]=true;
    mp[17]=true;
    mp[19]=true;
    mp[23]=true;
    mp[29]=true;
    mp[31]=true;
    mp[37]=true;
    
    return mp[n];
}

bool isPerfectSquare(int n)
{
    unordered_map<int,bool> mp;
    
    mp[1]=true;
    mp[4]=true;
    mp[9]=true;
    mp[16]=true;
    mp[25]=true;
    mp[36]=true;
    
    return mp[n];
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    int pow_of_two=1;
    int pow_of_three=1;
    
    for(int i=0;i<n;i++)
    {
        if(isPrime(i+1))
        {
            arr[i]=pow_of_two;
            pow_of_two*=2;
        }
        
        else if(isPerfectSquare(i+1))
        {
            arr[i]=pow_of_three;
            pow_of_three*=3;
        }
        
        else
        {
            arr[i]=arr[i-1]+arr[i-2];
        }
    }
    cout<<arr[n-1];
    
    return 0;
    
}
