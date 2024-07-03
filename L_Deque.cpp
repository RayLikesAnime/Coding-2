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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        vector<vector<int> >dp(n+1,vector<int>(n+1));
        for(int i=0;i<n;i++){
            dp[i][i]=0;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                dp[i][j]=max(a[j]-dp[i][j-1],a[i]-dp[i+1][j]);
            }
        }
        cout<<dp[0][n-1];
    }
}