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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int m;
        cin>>m;
        vector<int>l(n,0),r(n,0);
        l[0]=0;
        r[n-1]=0;
        for(int i=1;i<n-1;i++){
            if((abs(a[i]-a[i-1]))>=(abs(a[i]-a[i+1]))){
                l[i]=l[i-1]+abs(a[i]-a[i-1]);
            }
            else{
                l[i]=1+l[i-1];
            }
        }
        l[n-1]=1+l[n-2];
        for(int i=n-2;i>0;i--){
            if((abs(a[i]-a[i-1]))>=(abs(a[i]-a[i+1]))){
                r[i]=r[i+1]+1;
            }
            else{
                r[i]=r[i+1]+abs(a[i]-a[i+1]);
            }
        }
        r[0]=1+r[1];
        while(m--){
            int x,y;
            cin>>x>>y;
            if(y>x)
            cout<<r[x-1]-r[y-1]<<endl;
            else if(y<x)
            cout<<l[x-1]-l[y-1]<<endl;
            else
            cout<<0<<endl;
            
        }
    }
}