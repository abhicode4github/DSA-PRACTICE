Given an array of integers , find the nearest smaller number for every element such that the smaller element is on the left side.
input : {1,6,4,10,2,5}
output : {-1,1,1,4,1,2} 

input : {3,2,1}
output : {-1,-1,-1}

--------------------------------------------------------------------------------------------------------------------------------

  #include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int inputarr[n];
    int outputarr[n];
    
    for(int i = 0; i < n; i++)
    {
        cin >> inputarr[i];
    }
    
    stack <int> st;
    
    st.push(inputarr[0]);
    outputarr[0] = -1; 
    
    for(int i = 1; i < n; i++)
    {
        while(st.size() > 0 && st.top() >= inputarr[i])
        {
            st.pop();
        }
        
        if(st.size() == 0)
        {
            outputarr[i] = -1;
        }
        else
        {
            outputarr[i] = st.top();
        }
        
        st.push(inputarr[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        cout << outputarr[i] << " ";
    }
    
    return 0;
}
