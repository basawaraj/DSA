#include<bits/stdc++.h>
using namespace std;
class MINSTACK
{
 public:
    stack<int> st,mn;
    void push(int x)  
    {
       st.push(x);
        if ( mn.empty() || x <= mn.top() )
            mn.push(x);
    }
    
    void pop() 
    {
        if (mn.top() >= st.top())
            mn.pop();
            st.pop();
    }
    int top() 
    {
        cout<<st.top()<<endl;
    }
    
    int getMin()
    {
        cout<< mn.top()<<endl;
    }
};

int  main()
{
MINSTACK minStack =  MINSTACK();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin(); 
minStack.pop();
minStack.top();    
minStack.getMin(); 
return 0;
}