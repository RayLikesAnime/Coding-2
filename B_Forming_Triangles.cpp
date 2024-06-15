#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        int mp[n+1];
        for(int i=0;i<=n;i++){
            mp[i]=0;
        }
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        long long ans1=0,ans2=0;
        for(int i=0;i<=n;i++){
            ans1+=ans2*(((mp[i])*(mp[i]-1))/2);
            ans1+=((mp[i])*(mp[i]-1)*(mp[i]-2))/6;
            ans2+=mp[i];
        }
        cout<<ans1<<endl;
    }
}