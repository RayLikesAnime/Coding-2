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
        int iszero=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0')
            iszero=1;
        }
        if(iszero==1){
            if(n>3)cout<<0<<endl;
        else{
                if(n==3){
                if(s[0]=='0' || s[2]=='0')
                cout<<0<<endl;
                else{
                    cout<<min((s[0]-'0')+(s[2]-'0'),(s[0]-'0')*(s[2]-'0'))<<endl;
                }
            }
            else{
                if(s[0]=='0')
                cout<<s[1]<<endl;
                else
                cout<<s<<endl;
            }
        }
        
        }
        else{
            int mini=INT_MAX;
            int ind=0;
            int ans=0;
            int ans1=INT_MAX;
            for(int ind=0;ind<n-1;ind++){
                ans=0;
                for(int i=0;i<n;i++){
                    if(i==ind){
                        ans+=((((s[i]-'0')*10)+(s[i+1]-'0')));
                        i++;
                        continue;

                    }
                    else
                    if(s[i]!='1')
                    ans+=(s[i]-'0');

                }
                ans1=min(ans1,ans);
            }
            cout<<ans1<<endl;
        }
    }
}