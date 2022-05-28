#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& arr) {
        
        int n = arr.size();
        vector<int> ans(n, 0);

        stack<int> s;
        for(auto i = n-1; i >= 0; i--)
        {
            while(!s.empty() && arr[s.top()] <= arr[i])
             s.pop();
            if(!s.empty())
                ans[i] = (s.top()-i); 
            s.push(i);          
        }
         for(auto i=0; i<n; i++)
        {
            cout<<ans[i]<<" ";
        }
        return ans;
    }
};
int main()
{
   vector <int>  temperatures{73,74,75,71,69,72,76,73};
   Solution ob= Solution();
   ob.dailyTemperatures(temperatures);
   return 0;
}
