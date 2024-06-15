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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans=INT_MAX;
        for(int i=1;i<n;i++){
            int c=max(a[i],a[i-1]);
            ans=min(c,ans);

        }
        cout<<ans-1<<endl;
    }
}