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
        int q;
        cin>>q;
        int freq[n];
        freq[n-1]=n;
        for(int i=n-2;i>=0;i--){
            if(a[i]==a[i+1]){
                freq[i]=freq[i+1];
            }
            else{
                freq[i]=i+1;
            }
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            if(freq[l-1]>(r-1))
            cout<<-1<<" "<<-1<<endl;
            else
            cout<<l<<" "<<1+freq[l-1]<<endl;
        }
        cout<<endl;
    }
}