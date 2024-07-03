#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,W;
        cin>>n>>W;
        int w[n],v[n];
        for(int i=0;i<n;i++){
            cin>>w[i];
            cin>>v[i];
        }
        vector<vector<int> >dp(n+1,vector<int>(W+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=W;j++){
                int a=INT_MIN,b;
                if(w[i-1]<=j)
                a=v[i-1]+dp[i-1][j-w[i-1]];
                b=dp[i-1][j];
                dp[i][j]=max(a,b);
            }
        }
        cout<<dp[n][W];

    }
}