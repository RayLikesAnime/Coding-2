#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        int m=min((2*a),b);
        if(n%2==0)
        cout<<(n/2)*m<<endl;
        else
        cout<<(((n/2)*m)+a)<<endl;
    }
}