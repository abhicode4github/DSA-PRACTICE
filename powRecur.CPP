#include<iostream>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
    {
        return 1;
    }
    else 
    {
        return pow(m,n-1)*m;
    }
}
int main()
{
    int res;
    res=pow(2,9);
    cout<<"result is "<<res;
    return 0;
}

// output 

result is 512
