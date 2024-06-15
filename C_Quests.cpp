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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int c[n];
        c[0]=b[0];
        for(int i=1;i<n;i++){
            if(c[i-1]>b[i])
            c[i]=c[i-1];
            else
            c[i]=b[i];
        }
        int ans1=0,ans2=0;
        for(int i=0;i<min(n,k);i++){
            int x=k-i-1;
            ans2+=a[i];
            int y=ans2+x*c[i];
            if(ans1<=y)
            ans1=y;
        }
        cout<<ans1<<endl;
    }
}