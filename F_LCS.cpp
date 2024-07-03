#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        string s,t;
        cin>>s>>t;
        string ans="";
        int n=s.length(),m=t.length();
        vector<vector<int> >dp(n+1,vector<int>(m+1,0));
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                if(s[i-1]==t[j-1])
                dp[i][j]=1+dp[i-1][j-1];
                else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
        int i=n,j=m;
        while(i>0 && j>0){
            if(s[i-1]==t[j-1]){
                ans+=s[i-1];
                i--;
                j--;
            }
            else if(dp[i][j-1]>=dp[i-1][j])
            j--;
            else
            i--;
        }
        reverse(ans.begin(),ans.end());
        cout<<ans;
    }
}