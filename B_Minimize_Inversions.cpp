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
        int a[n];
        int b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        vector<pair<int,int> >v;
        for(int i=0;i<n;i++){
            v.push_back(make_pair(a[i]+b[i]-2,i));
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++)
        cout<<a[v[i].second]<<" ";
        cout<<endl;
        for(int i=0;i<n;i++)
        cout<<b[v[i].second]<<" ";
        cout<<endl;
    }
}