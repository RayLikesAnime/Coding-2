#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int ind[m];
        for(int i=0;i<m;i++)
        cin>>ind[i];
        string c;
        cin>>c;
        sort(c.begin(),c.end());
        sort(ind,ind+m);
        map<int,int>mp;
        int i=0;

        for(int i=0;i<m;i++)
        mp[ind[i]]++;
        for(int i=0;i<m;i++)
        mp[ind[i]]--;
        int d=0;
        for(auto it:mp){
            d+=it.second;
        }
        c=c.substr(0,m-d);
        for(auto it:mp){
            s[it.first-1]=c[i];
            i++;
        }
        cout<<s<<endl;
        

    }
}