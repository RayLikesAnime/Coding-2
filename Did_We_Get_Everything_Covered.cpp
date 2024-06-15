#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        string s;
        cin>>s;
        int flag=0;
        map<int,int>mp1;

        for(int i=0;i<m;i++){
            if(k>(int)s[i]-'a'){
            flag=1;
            break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
            for(int i=0;i<n;i++)
            cout<<'a';
            cout<<endl;
        }
        else{
            int cnt=0;
            string ans;
            for(int i=0;i<m;i++){
                mp1[s[i]-'a']++;
                if(mp1.size()==k){
                    ans.push_back(s[i]);
                    cnt++;
                    mp1.clear();
                }
            }
            if(cnt>=n)
            cout<<"YES"<<endl;
            else{
                cout<<"NO"<<endl;
                if(mp1.empty()){
                    while(ans.size()<n){
                        ans.push_back('a');
                    }
                    cout<<ans<<endl;
                }
                else{
                    char g;
                    for(int i=0;i<k;i++){
                        if(mp1[i]==0){
                            g='a'+i;
                            break;
                        }
                    }
                    while(ans.size()<n)
                    ans.push_back(g);
                    cout<<ans<<endl;
                }
            }
        }


    }
}