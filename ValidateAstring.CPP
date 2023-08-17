#include<iostream>
using namespace std;

int ValidateString(char name[])
{
    int i;
    
    for(i=0;name[i]!='\0';i++)
    {
        if(!(name[i]>=65 && name[i]<=90) && !(name[i]>=97 && name[i]<=122) && !(name[i]=48 && name[i]<=57))
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    
    return 0;
}

int main()
{
    char name[]="Ani?321";
    
    if(ValidateString(name))
    {
        cout<<"Invalid string";
    }
    else 
    {
        cout<<"Valid string";
    }
    
    return 0;
}


//////// OUTPUT 
Invalid string 
