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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>b[i];
        int m;
        cin>>m;
        int d[m];
        for(int i=0;i<m;i++)
        cin>>d[i];
        unordered_map<int,int>mp;
        for(int i=0;i<m;i++){
            mp[d[i]]++;
        }
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(mp[b[i]]>0)
                mp[b[i]]--;
                else{
                    flag=1;
                    break;
                }

            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        // unordered_map<int,int >mp;
        // for(int i=0;i<n;i++){
        //     if(a[i]!=b[])
        //     mp[b[i]]++;

        // }
        // int flag=0;
        // for(int i=0;i<m;i++){
        //     if(mp.find(d[i])!=mp.end()){
        //         mp[d[i]]--;
        //     }
        //     else
        //     flag=1;
        // }
        // for(auto it: mp){
        //     if(it.second>0)
        //     flag=1;
        // }
        // if(flag==0)
        // cout<<"YES"<<endl;
        // else
        // cout<<"NO"<<endl;


    }
}