#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x,n;
        cin>>x>>n;
        int ans=x/n;
        int ans1=INT_MIN;
        for(int i=1;i<=sqrt(x);i++){
            if(x%i==0){
                if(i<=ans)
                ans1=max(ans1,i);
                if(x/i<=ans)
                ans1=max(ans1,x/i);
            }
        }
        if(ans1>ans)
        cout<<ans1-1<<endl;
        else
        cout<<ans1<<endl;
        
    }
}