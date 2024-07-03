#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,w; cin>>n>>w;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin>>a[i]>>b[i];
    int N = 1e5+5;
    vector<vector<int> > dp(N, vector<int>(n+1, INT_MAX));
    //dp[i][j] = min weight for value i considering upto j items
    
    dp[0][0] = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 1; j <= n; j++) {
            dp[i][j] = min(dp[i][j], dp[i][j-1]);
            if (i - b[j-1] >= 0)
                dp[i][j] = min(dp[i][j], dp[i - b[j-1]][j-1] + a[j-1]);
        }
    }
    int ans = 0;
    for (int i = N-1; i >= 1; i--) {
        if (dp[i][n] <= w) {
            ans = i;
            break;
        }
    }
    cout<<ans;
    }
}