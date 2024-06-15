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
        int f[n];
        f[n-1]=n-1;
        for(int i=n-2;i>=0;i--){
            if(s[i]>=s[f[i+1]])
            f[i]=i;
            else
            f[i]=f[i+1];
        }
        string ans="";
        for(int i=0;i<n;i++){
            ans.push_back(s[f[i]]);
            i=f[i];
        }
        string s1=s;
        sort(s1.begin(),s1.end());
        int ind=0;
        for(int i=0;i<ans.length();i++){
            if(ans[i]==ans[0]){
                ind=i;
            }
        }
        reverse(ans.begin(),ans.end());
        int j=0;
        for(int i=0;i<s.length();i++){
            s[f[i]]=ans[j];
            j++;
            i=f[i];
        }
        if(s1==s)
        cout<<ans.length()-ind-1<<endl;
        else
        cout<<-1<<endl;
    }
}