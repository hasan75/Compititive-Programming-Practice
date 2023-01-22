#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = nums.size();
    int l=0;
    int h = n;
    int ans = -1;
    int ans2 = -1;
    while(l<=h)
    {
        int mid = (l+h)/2;
        if(mid==target)
        {
            ans= mid;
            break;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
        else if(nums[mid]<target)
        {
            l=mid+1;
        }
    }
    return ans;

}
