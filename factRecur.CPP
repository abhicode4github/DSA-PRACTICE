// 
#include<iostream>
using namespace std;

int fact(int n)
{
    if(n==0)
    {
        return 1;
        
    }
    
    else
    {
        return fact(n-1)*n;
    }
}

int main()
{
    int y=0;
    y=y+fact(5);
    cout<<"factorial is "<<y<<endl;
    return 0;
}

output 

factorial is 120
