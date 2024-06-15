#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k; 
    cin>>n>>m>>k; 
    map<int,int>f1,f2; 
    vector<int>a(n),b(m); 
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]=x;
    }
    for(int i=0;i<m;i++){
        int x;
        cin>>x;
        b[i]=x;
    } 
      if(n==m){ 
        cout<<1<<endl; 
        continue; 
    } 
    for(int i=0;i<m;i++){ 
        f1[b[i]]++; 
    } 
    for(int i=0;i<m;i++){ 
        f2[a[i]]++; 
    } 
    int sum=0,ans=0; 
    for(auto it:f1){ 
        int val=it.first; 
        if(f2.find(val)!=f2.end()){ 
            if(f1[val]<f2[val])
            sum+=f1[val];
            else
            sum+=f2[val];
        } 
    } 
    if(sum>=k){ 
        ans++; 
    } 
    for(int i=m;i<n;i++){ 
        if(a[i-m]!=a[i]){ 
            sum-=min(f1[a[i]],f2[a[i]]); 
            sum-=min(f1[a[i-m]],f2[a[i-m]]); 
            f2[a[i]]++; 
            f2[a[i-m]]--; 
            sum+=min(f1[a[i-m]],f2[a[i-m]]); 
            sum+=min(f1[a[i]],f2[a[i]]); 
        } 
        if(sum>=k){ 
            ans++; 
        } 
    } 
    cout<<ans<<endl;

    }
}