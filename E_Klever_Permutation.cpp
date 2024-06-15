#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v1(n),v2(k);
        v2[1]=n;
        v2[0]=1;
        for(int i=0;i<k;i++){
            int x=0;
            for(int j=i;j<n;j+=k){
                if(i%2==0){
                    v1[j]=v2[i]+x;
                }
                else{
                    v1[j]=v2[i]-x;
                }
                x++;
            }
            int mx=0,mn=n+1;
            for(int j=i;j<n;j+=k){
                mx=max(mx,v1[j]);
                mn=min(mn,v1[j]);
            }
            if(i+2<k){
                if(i%2==1){
                    v2[i+2]=mn-1;
                }
                else{
                    v2[i+2]=mx+1;
                }
            }
        }
            
        for(int i=n-1;i>=0;i--)
        cout<<v1[i]<<" ";
        cout<<endl;
    }
}