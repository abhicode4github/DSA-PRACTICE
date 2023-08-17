#include<iostream>
using namespace std;

void ChangeCaseOfString(char s[])
{
    
    int i;
    
    for(i=0;s[i]!='\0';i++)
    {
        s[i]=s[i]+32;
    }
    
    cout<<"The new string is : "<<s<<endl;
}

int main()
{
    
    
     char s[]="WELCOME";
     
     ChangeCaseOfString(s);
     
     return 0;
     
     
}


//// OUTPUT 
The new string is : welcome
