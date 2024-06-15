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
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]=i+1;
        }
        int ans=0;
        for(int i=1;i<=2*n;i++){
            for(int j=i+1;j<=2*n;j++){
                if(i*j>2*n)
                break;
                int pro=i*j;
                auto ind1=mp.find(i);
                auto ind2=mp.find(j);
                if(pro==(*ind1).second+(*ind2).second)
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}