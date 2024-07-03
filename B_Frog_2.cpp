#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int h[n];
        for(int i=0;i<n;i++)
        cin>>h[i];
        vector<int>dp(n);
        dp[0]=0;
        for(int i=1;i<n;i++){
            int mini=INT_MAX;
            for(int j=i-1;j>=max((long long)0,i-k);j--){
                mini=min(mini,dp[j]+abs(h[j]-h[i]));
            }
            dp[i]=mini;
        }
        cout<<dp[n-1];
    }
}