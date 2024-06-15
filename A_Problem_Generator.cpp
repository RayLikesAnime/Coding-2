#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string s;
        cin>>s;
        int arr[7]={0};
        for(int i=0;i<n;i++){
            arr[s[i]-'A']++;
        }
        int ans=0;
        for(int i=0;i<7;i++){
            int c=max(0,m-arr[i]);
            ans+=c;
        }
        cout<<ans<<endl;
    }
}