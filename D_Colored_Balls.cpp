#include<bits/stdc++.h>
using namespace std;
#define int long long 
int mod=998244353;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        int sum[5050];
        for(int i=0;i<5050;i++)
        sum[i]=1;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<=arr[i];j++){
                ans=(ans+((long long)sum[j]*arr[i]))%mod;
            }
            for(int j=arr[i]+1;j<5050;j++){
                ans=(ans+(long long)sum[j]*((j+arr[i]+1)/2))%mod;
            }
            for(int j=5050;j>=0;j--){
                if(j>=arr[i]){
                    sum[j]=(sum[j]+sum[j-arr[i]])%mod;
                }
            }
        }
        cout<<ans<<endl;
    }
}