#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n],b[n],c[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        for(int i=0;i<m;i++)
        cin>>c[i];
        vector<pair<int,int> > v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(b[i],a[i]));
        }
        priority_queue<int>pq;
        for(int i=0;i<m;i++)
        pq.push(c[i]);
        int ans=0,j=0,i=0;
        while(i<n){
            int x=pq.top();
            pq.pop();
            if(v[i].second>=x){
                x=x+v[i].first-v[i].second;
                pq.push(x);
                ans++;
                ans++;
            }
            else{
                pq.push(x);
                i++;
            }
        }
        cout<<ans<<endl;


    }
}