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
        vector<int> a(n),b(m);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<m;i++)
        cin>>b[i];
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        reverse(b.begin(),b.end());
        // int c=0;
        // int j=0;
        // int k=m-1;
        // for(int i=0;i<n;i++){
        //     if(abs(a[i]-b[j])>abs(a[i]-b[k])){
        //         c+=abs(a[i]-b[j]);
        //         j++;

        //     }
        //     else if(abs(a[i]-b[j])<=abs(a[i]-b[k])){
        //         c+=abs(a[i]-b[k]);
        //         k--;
        //     }
        // }

        // int c1=0;
        // j=0,k=m-1;
        // for(int i=n-1;i>=0;i--){
        //     if(abs(a[i]-b[j])>=abs(a[i]-b[k])){
        //         c1+=abs(a[i]-b[j]);
        //         j++;

        //     }
        //     else if(abs(a[i]-b[j])<abs(a[i]-b[k])) {
        //         c1+=abs(a[i]-b[k]);
        //         k--;
        //     }

        // }
        // cout<<max(c,c1)<<endl;
        int c=0;
        int j=m-1;int k=n-1;
        int x=0,y=0;
        int ans=0;
        while(c!=n){
            if(abs(b[j]-a[k])>abs(b[y]-a[x])){
                ans+=abs(b[j]-a[k]);
                j--;
                k--;
                c++;
            }
            else{
                ans+=abs(b[y]-a[x]);
                x++;
                y++;
                c++;
            }
        }
        cout<<ans<<endl;
    }
}