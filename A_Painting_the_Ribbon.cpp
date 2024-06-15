#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int q = (n/m) + (n % m != 0);
        if (n - q <= k)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
        }
    }
}