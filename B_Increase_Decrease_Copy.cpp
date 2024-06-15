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
        int a[n+1],b[n+1];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n+1;i++)
        cin>>b[i];
        int ans=0;
        int ans1=INT_MAX;
        int mini =INT_MAX;;
        int mini1=INT_MAX;
        int flag=0;

        for(int i=0;i<n;i++){
            ans+=abs(a[i]-b[i]);
            if (b[n]>=a[i] && b[n]<=b[i] || b[n]>=b[i]&&b[n]<=a[i]) flag=1;
            mini1 = min(abs(b[n] - b[i]), abs(b[n] - a[i]));
            mini=min(mini,mini1);


        }
        if(flag==1)
        cout<<ans+1<<endl;
        else
        cout<<ans+mini+1<<endl;
    }
}