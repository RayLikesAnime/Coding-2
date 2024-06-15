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
        string s;
        cin>>s;
        int c=1;
        int ans=0;
        int f[26]={0};
        for(int i=0;i<n;i++){
            f[s[i]-'A']++;
        }
        for(int i=0;i<26;i++){
            if(f[i]>=i+1)
            ans++;
        }
        cout<<ans<<endl;
    }

}