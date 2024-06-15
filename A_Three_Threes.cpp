#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int n;
    cin>>n;
    string ans="";
    string s=to_string(n);
    for(int i=0;i<n;i++){
        ans=ans+s;
    }
    cout<<ans<<endl;
}