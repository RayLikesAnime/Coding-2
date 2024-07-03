#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n],b[n],c[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
            cin>>b[i];
            cin>>c[i];
        }
        vector<int>dp1(n),dp2(n),dp3(n);
        dp1[0]=a[0];
        dp2[0]=b[0];
        dp3[0]=c[0];
        for(int i=1;i<n;i++){
            dp1[i]=a[i]+max(dp2[i-1],dp3[i-1]);
            dp2[i]=b[i]+max(dp1[i-1],dp3[i-1]);
            dp3[i]=c[i]+max(dp1[i-1],dp2[i-1]);
        }
        cout<<max(dp1[n-1],max(dp2[n-1],dp3[n-1]));
    }
}