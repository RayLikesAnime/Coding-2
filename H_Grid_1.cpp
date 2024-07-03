#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<char>adj[n];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char x;
                cin>>x;
                adj[i].push_back(x);
            }
        }
        vector<vector<int> >dp(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(adj[i][0]=='#')
            break;
            else
            dp[i][0]=1;
        }
        for(int i=0;i<m;i++){
            if(adj[0][i]=='#')
            break;
            else
            dp[0][i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(adj[i][j]=='.'){
                    dp[i][j]=(dp[i-1][j]+dp[i][j-1])%mod;
                }
            }
        }
        cout<<dp[n-1][m-1]<<endl;
    }
}