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
        for(int i=0;i<k;i++){
            cout<<i+1<<" ";
        }
        for(int i=k;i<n;i++){
            cout<<n-i+k<<" ";
        }
        cout<<endl;
    }
}