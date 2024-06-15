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
        int arr[n];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int ans=n,flag=0;
        int prev=0;int c=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=arr[0]){
                ans=min(c,ans);
                c=0;
                flag=1;
            }else{
                c++;
            }
        }
        ans=min(c,ans);

        if(n==1 || flag==0)
        cout<<-1<<endl;
        else
        cout<<ans<<endl;
    }
}