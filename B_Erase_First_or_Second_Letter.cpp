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
        int a[n];
        set<int>se;
        int ans=1;
        se.insert(s[0]);
        for(int i=1;i<n;i++){
            se.insert(s[i]);
            ans+=se.size();

        }
        cout<<ans<<endl;
    }
}