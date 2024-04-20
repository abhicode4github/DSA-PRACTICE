the caesar cipher is a type of substitution cipher in which each alphabet in the plaintext or messages is shifted by a number of
places down the alphabet . 
for example with a shift of 1, P would be replaced by Q , Q would become R , and so on .... 

example input = AdyZ89 , key = 2 
  output = CfaB01

---------------------------------------------------------------------------------------------------------------------------------
  #include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    
    int key;
    cin>>key;
    
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>=65 and str[i]<=90)
        {
            int index=str[i]-'A';
            index=(index+key)%26;
            str[i]=index+'A';
        }
        
        else if(str[i]>=97 and str[i]<=122)
        {
            int index=str[i]-'a';
            index=(index+key)%26;
            str[i]=index+'a';
        }
        
        else
        {
            int index=str[i]-'0';
            index=(index+key)%10;
            str[i]=index+'0';
        }

    }
    
    cout<<str;
    return 0;
    
}
