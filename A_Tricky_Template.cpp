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
        string a,b,c;
        cin>>a>>b>>c;
        int ind=-1;
        for(int i=0;i<n;i++){
            if(a[i]!=c[i] && b[i]!=c[i]){
                ind=0;
                break;
            }
        }
        if(ind==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}