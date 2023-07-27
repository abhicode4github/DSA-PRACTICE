//
#include<iostream>
using namespace std;

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else 
    {
        return sum(n-1)+n;
    }
}

int main()
{
    int x=8,y=0;
    y=y+sum(8);
    cout<<y;
}

output 
36
