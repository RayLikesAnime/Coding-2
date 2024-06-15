#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>n>>x;
        string s;
        cin>>s;
        int c=0;
        int flag=1;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
            c--;
            if(c<0){
                flag=0;
                break;
            }}
            else{
                c=x;
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}