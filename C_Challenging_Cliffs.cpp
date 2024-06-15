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
        sort(a,a+n);
        int mini=INT_MAX;
        int ind=0;
        if(n==2){
        cout<<a[0]<<" "<<a[1]<<endl;
        continue;}
        for(int i=1;i<n;i++){
            if(mini>abs(a[i]-a[i-1])){
                mini=abs(a[i]-a[i-1]);
                ind=i;
            }
        }
        for(int i=ind;i<n;i++)
        cout<<a[i]<<" ";
        for(int i=0;i<ind;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }
}