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
        int k[n];
        for(int i=0;i<n;i++)
        cin>>k[i];
        int ans=1;
        for(int i=0;i<n;i++){
            int y=__gcd(ans,k[i]);
            y=k[i]/y;
            ans*=y;

        }
        int sum=0;
        int anss[n];
        for(int i=0;i<n;i++){
            sum+=ans/k[i];
            anss[i]=ans/k[i];
        }
        if(sum>=ans){
            cout<<-1<<endl;
        }else{
            for(int i=0;i<n;i++)
            cout<<anss[i]<<" ";
            cout<<endl;
        }

        // int sum=0;
        // int maxi=INT_MIN;
        // for(int i=0;i<n;i++){
        //     sum+=k[i];
        //     maxi=max(maxi,k[i]);
        // }
        // int ans[n];
        // int mini=INT_MAX;
        // int sum1=0;
        // for(int i=0;i<n;i++){
        //     ans[i]=(((maxi)*sum)/(k[i]));
        //     if(maxi%k[i]!=0)
        //     ans[i]--;

        //     if(ans[i]*k[i]<mini){
        //         mini=ans[i]*k[i];
        //     }
        //     sum1+=ans[i];
        // }
        //     if(mini<=sum1)
        //     cout<<-1<<endl;
        //     else{
        //     for(int i=0;i<n;i++)
        //     cout<<ans[i]<<" ";
        //     cout<<endl;
        //     }

    }
}