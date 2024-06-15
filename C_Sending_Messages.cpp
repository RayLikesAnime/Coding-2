#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,a,b;
        cin>>n>>f>>a>>b;
        int m[n];
        for(int i=0;i<n;i++)
        cin>>m[i];
        int c=min((m[0]-0)*a,b);
        int ans=0;
        ans+=c;
        int flag=0;
        for(int i=1;i<n;i++){
            c=min((m[i]-m[i-1])*a,b);
            ans+=c;
        }
        if(ans>=f)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;

    }
}