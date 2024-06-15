#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a<b && b<c)
        cout<<"STAIR"<<endl;
        else if(a<b && b>c)
        cout<<"PEAK"<<endl;
        else
        cout<<"NONE"<<endl;
    }
}