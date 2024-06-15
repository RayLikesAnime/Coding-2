#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s,k;
    cin>>n>>s>>k;
    int p[n],q[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
        cin>>q[i];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=(p[i]*q[i]);
    }
    if(ans>=s)
    cout<<ans<<endl;
    else
    cout<<ans+k<<endl;

}