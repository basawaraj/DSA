#include<bits/stdc++.h>

using namespace std;


 bool inpar(string s)
{
    stack<char> st;
    char top;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]== '['|| s[i]== '{' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else{
            if(st.empty())
            {
                return false;
                
            }
            else{
                top=st.top();
                if((s[i]==']' && top=='[') || (s[i]=='}' && top=='{') || (s[i]==')' && top=='(') )
                {
                    st.pop();
                }
                else{
                    return false;
                }
            }
        }
    }
    if(st.empty())
            {
                return true;
            }
            else
            {
                return false;
            }
            return (st.empty());
}

int main()
{
    string str="[{[)]}]";
    cout<<inpar(str)<<endl;
    return 0;
}