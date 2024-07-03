#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int mean=max(x,max(y,z));
        int ans1=INT_MAX;
        for(int i=0;i<=mean;i++){
            int ans=abs(i-x)+abs(i-y)+abs(i-z);
            ans1=min(ans1,ans);

        }
        cout<<ans1<<endl;
    }
}