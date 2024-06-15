#include<bits/stdc++.h>
using namespace std;
#define int long long int
int MOD=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int row[n+1],col[n+1];
        for(int i=0;i<=n;i++){
            row[i]=0;
            col[i]=0;
        }
        int c=0;
        while(k--){
            int r,c;
            cin>>r>>c;
            row[r]=1;
            row[c]=1;
            col[r]=1;
            col[c]=1;
            if(r==c)
            c++;
            else
            c+=2;
        }
        int fr=0;
        for(int i=1;i<=n;i++){
            if(row[i]==0)
            fr++;
        }
        vector<int>dp(fr+30);
        dp[0]=1;
        dp[1]=1;
        for(int i=2;i<=fr;i++){
            dp[i]=(dp[i]+dp[i-1])%MOD;
                int ans=((i-1)*(dp[i-2]))%MOD;
                ans=(ans*2)%MOD;
                dp[i]=(dp[i]+ans)%MOD;
        }
        cout<<dp[fr]<<endl;
    }
}