#include<iostream>
using namespace std;

double e(int x,int n)
{
    static double p=1,f=1;
    
    double r;
    
    if(n==0)
    {
        return 1;
    }
    else
    {
        r=e(x,n-1);
        p=p*x;
        f=f*n;
        
        return r+p/f;
    }
}

int main()
{
    int a=5;
    int b=4;

    double res;
    res=e(a,b);
    cout<<"result is "<<res;
}

// output 

result is 65.375
