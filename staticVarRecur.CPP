//  recursive function using static variable  .

#include<iostream>
using namespace std;
 
int fun(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return fun(n-1) + x;
    }
    return 0;
}

int main()
{
    int a=5;
    int res=fun(a);
    cout<<res<<endl;
}

// output 

25 


