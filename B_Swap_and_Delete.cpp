#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int one=0,zero=0;
        int a=0,b=0;
        int ans=s.size();
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            zero++;
            else
            one++;
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')
            a++;
            else
            b++;
            if(zero>=b && one>=a)
            ans=s.size()-i-1;
        }
        cout<<ans<<endl;
    }
}