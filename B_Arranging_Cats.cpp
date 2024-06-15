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
        string s,f;
        cin>>s>>f;
        int c1=0,c2=0,c3=0,c4=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1')
            c1++;
            if(f[i]=='1')
            c2++;
            if(s[i]=='1' && f[i]=='0')
            c3++;
            if(s[i]=='0' && f[i]=='1')
            c4++;
        }
        if(c1>c2)
        cout<<abs(c1-c2)+c4<<endl;
        else
        cout<<abs(c1-c2)+c3<<endl;
    }
}