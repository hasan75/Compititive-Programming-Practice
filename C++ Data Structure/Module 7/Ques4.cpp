#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
           int ans = 0;
	for(int i=0 ; i<=n-1 ; i++)
    {
        if(i==0)
        {
            ans++;
            continue;
        }
        if(a[i]!=a[i-1])
			ans++;
    }
	cout<<ans;
	return 0;
}
