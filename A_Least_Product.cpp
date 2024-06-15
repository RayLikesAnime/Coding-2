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
        int zer=0,neg=0;
        for(int i=0;i<n;i++){
            if(a[i]<0)
            neg++;
            else
            if(a[i]==0)
            zer++;
        }
        if(neg%2==0 && zer==0)
        cout<<1<<endl<<1<<" "<<0<<endl;
        else
        cout<<0<<endl;
    }
}