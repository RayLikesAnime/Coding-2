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
        int c=1;
        int ans=1;
        int ind=1;
        while(c<=k){
            ans=c;
            c=c+pow(2,ind);
            ind++;
        }
        if(n==1)
        cout<<k<<endl;
        else{
            cout<<ans<<" ";
            cout<<k-ans<<" ";
            for(int i=2;i<n;i++)
            cout<<0<<" ";
            cout<<endl;
        }
    }
}