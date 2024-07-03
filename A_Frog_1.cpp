#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int h[n];
        for(int i=0;i<n;i++)
        cin>>h[i];
        vector<int>dp(n);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int a=INT_MAX,b;
            if(i>1)
            a=dp[i-2]+abs(h[i]-h[i-2]);
            b=dp[i-1]+abs(h[i]-h[i-1]);
            dp[i]=min(a,b);
        }
        cout<<dp[n-1];
    }
}