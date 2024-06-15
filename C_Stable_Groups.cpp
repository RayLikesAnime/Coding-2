#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);
        vector<int>v;
        for(int i=1;i<n;i++){
            v.push_back(a[i]-a[i-1]);
        }
        int ans=1;
        vector<int>v1;
        for(int i=0;i<n-1;i++){
            if(v[i]>x){
                v1.push_back(v[i]);
                ans++;
            }
        }
        sort(v1.begin(),v1.end());
        for(int i=0;i<v1.size();i++){
            int z=0;
            if(v1[i]%x==0)
            z=(v1[i]/x)-1;
            else
            z=(v1[i]/x);
            if(k>=z){
                ans--;
                k-=z;
            }
        }
        cout<<ans<<endl;

    }
}