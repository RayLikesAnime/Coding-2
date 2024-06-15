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
        string s;
        cin>>s;
        int st=0,e=0;
        for(int i=0;i<n;i++){
            if(s[i]=='B'){ 
            st=i;
            break;}
        }
        for(int i=n-1;i>=0;i--){
            if(s[i]=='B'){ 
            e=i;
            break;}
        }
        cout<<e-st+1<<endl;
    }
}