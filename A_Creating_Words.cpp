#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a>>b;
        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        cout<<a<<" "<<b<<endl;
    }
}