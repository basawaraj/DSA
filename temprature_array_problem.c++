#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures)
    {
        int i;
        int len=temperatures.size();

      vector<int> answer(len,0);
        stack<int>stck;

        for( i=0; i<len; i++)
        {
            while(!stck.empty() && temperatures[stck.top()]<temperatures[i])
            {
                answer[stck.top()]=(i-stck.top());
                stck.pop();
            }
            stck.push(i);
        }

        for( i=0; i<len; i++)
        {
            cout<<answer[i]<<" ";
        }
     return answer;
    }
};

int main()
{
   vector <int>  temperatures{73,74,75,71,69,72,76,73};
   Solution ob= Solution();
   ob.dailyTemperatures(temperatures);
   return 0;
}