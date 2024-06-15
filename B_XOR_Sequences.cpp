#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        long long z=x^y;
        vector<int>v;
        while(z>0){
            v.push_back(z%2);
            z/=2;
        }
        int ans=0;
        int len=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                len++;
            }
            else{
                break;
            }
        }
        cout<<(1LL<<len)<<endl;
    }
}