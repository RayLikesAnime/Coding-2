#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int p[n+m+1],t[n+m+1];
        int x=0,y=0;
        for(int i=0;i<n+m+1;i++){
            cin>>p[i];
            x+=p[i];

        }
        for(int i=0;i<n+m+1;i++){
        cin>>t[i];
        y+=t[i];
        }
        vector<int>pr,te;
        for(int i=0;i<n+m+1;i++){
            if(pr.size()<n){
                if(te.size()<m){
                    if(p[i]>t[i])
                    pr.push_back(i);
                    else
                    te.push_back(i);
                }
                else
                pr.push_back(i);
            }
            else
                te.push_back(i);
        }
        int ans1=0,ans2=0;
        for(int i=0;i<pr.size();i++){
            ans1+=p[pr[i]];
        }
        for(int i=0;i<te.size();i++){
            ans2+=t[te[i]];
        }
        vector<int>ans(n+m+1,0);
        for(int i=0;i<n+m+1;i++){
            if(find(pr.begin(),pr.end(),i)!=pr.end()){
                ans[i]=ans1-p[i]+(pr.size()<n?p[n-1]:0);
            }
            else{
                ans[i]=ans2-t[i]+(te.size()<m?t[m-1]:0);
            }
        }
        for(int i=0;i<n+m+1;i++)
        cout<<ans[i]<<" ";
        cout<<endl;

    }
}