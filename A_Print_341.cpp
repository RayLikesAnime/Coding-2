#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<(2*n)+1;i++){
            if(i%2==0)
            cout<<1;
            else
            cout<<0;
        }
    }
}