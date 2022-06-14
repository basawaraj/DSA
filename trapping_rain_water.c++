#include<bits/stdc++.h>
using namespace std;

int trap(int arr[],int len)
{
    int res=0;
    int left[len],maxleft = INT_MIN;
    int right[len], maxright = INT_MIN;
    for(int i = 0; i<len;i++)
        {
            if(arr[i]> maxleft)
                maxleft = arr[i];
            
            left[i] = maxleft;    
        }
        for(int i =len; i>=0;i--)
        {
            
            if(arr[i]> maxright)
                maxright = arr[i];
            
            right[i] = maxright;    
        }
        
        for(int i=0;i< len;i++)
        {
            res += min(left[i],right[i]) - arr[i];
        }
        return res;
}

int main()
{
    int a[]={4,2,0,3,2,5};
   int  len = sizeof(a)/sizeof(a[0]);
    cout<<trap(a,len);
    return 0;

}