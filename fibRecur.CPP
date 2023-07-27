#include<iostream>
using namespace std;

int fib(int n)
{
    int t0=0,t1=1,s=0,i;
    
    
    if(n<=1)
    {
        return n;
    }
    
    else 
    {
        for(i=2;i<=n;i++)
        {
            s=t0+t1;
            t0=t1;
            t1=s;
        }
        
        return s;
    }
}

int main()
{
    int res;
    res=fib(10);
    cout<<res;
}

// output 

55
