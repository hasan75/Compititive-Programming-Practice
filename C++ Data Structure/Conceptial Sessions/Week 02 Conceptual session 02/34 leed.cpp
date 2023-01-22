#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int target;cin>>target;
    vector<int>nums;

    for(int i=0;i<n;i++)
    {
        int in;cin>>in;
        nums.push_back(in);
    }

    vector<int>a(2);
    int l=0;
    int h = nums.size()-1;
    int f_index = -1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(nums[mid]==target)
        {
            f_index=mid;
            h=mid-1;

        }
        if(nums[mid]<target)
        {
            l=mid+1;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
    }
    a[0]=f_index;

    l=0;
    h = nums.size()-1;
    int l_index = -1;
    while(l<=h)
    {
        int mid = l+(h-l)/2;
        if(nums[mid]==target)
        {
            l_index=mid;
            l=mid+1;

        }
        if(nums[mid]<target)
        {
            l=mid+1;
        }
        else if(nums[mid]>target)
        {
            h=mid-1;
        }
    }
    a[1]= l_index;

    return a;
}
