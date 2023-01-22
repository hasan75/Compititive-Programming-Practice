#include<bits/stdc++.h>
using namespace std;

/*

Time Complexity: O(1);

Memory Complexity: O(1);

*/
int main()
{

    //order 1 time complexity
    //input 3 nums, show max,min,sum,mul

    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int mul = a*b*c;

    cout<<maxi<<" "<<mini<<" "<<sum<<" "<<mul<<" ";

}
