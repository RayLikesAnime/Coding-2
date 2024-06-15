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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int f[n+1];
        for(int i=0;i<n;i++){
            if(a[i]!=-1)
            f[a[i]]=i+1;
        }
        int ind=0;
        for(int i=0;i<n;i++){
            if(a[i]==-1)
            ind=i+1;
        }
        cout<<ind<<" ";
        int c=1;
        while(c<n){
            cout<<f[ind]<<" ";
            ind=f[ind];
            c++;
        }
    }
}