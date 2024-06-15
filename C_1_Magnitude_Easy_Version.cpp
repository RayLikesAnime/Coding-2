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
        int flag=0;
        int sum=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0)
            flag=1;
            sum+=a[i];

        }
        vector<int>dp1(n+1),dp2(n+1);
       for(int i=1;i<=n;i++){
                dp2[i]=dp2[i-1]+a[i-1];
                dp1[i]=max(dp1[i-1]+a[i-1],abs(dp2[i-1]+a[i-1]));
       }
       cout<<dp1[n]<<endl;
    }
}