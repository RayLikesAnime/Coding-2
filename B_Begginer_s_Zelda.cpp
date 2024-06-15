#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int adj[n-1][2];
        for(int i=0;i<n-1;i++){
            cin>>adj[i][0];
            cin>>adj[i][1];
        }
        int freq[n+1];
        for(int i=0;i<=n;i++)
        freq[i]=0;
        for(int i=0;i<n-1;i++){
            freq[adj[i][0]]++;
            freq[adj[i][1]]++;
        }
        int ans=0;
        for(int i=1;i<=n;i++){
            if(freq[i]==1)
            ans++;
        }
        if(ans%2==0)
        cout<<ans/2<<endl;
        else
        cout<<(ans/2)+1<<endl;
    }
}