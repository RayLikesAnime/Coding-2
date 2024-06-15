#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        map<int,int>mp;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int c=0;
        for(int i=0;i<n;i++){
            c+=mp[a[i]-i];
            mp[a[i]-i]++;
        }
        cout<<c<<endl;
    }
}