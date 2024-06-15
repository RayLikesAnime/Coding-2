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
        int a[n],b[m];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        int c=INT_MIN;
        for(int i=0;i<m;i++){
            c=max(c,b[i]);
        }
        sort(a+n-c,a+n);
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}