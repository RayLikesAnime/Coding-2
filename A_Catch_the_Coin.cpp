#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i];
            cin>>y[i];
        }
        for(int i=0;i<n;i++){
            if(y[i]>=-1){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
        }
        
    }
}