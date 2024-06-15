#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,f,k;
        cin>>n>>f>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int fav=arr[f-1];
        sort(arr,arr+n,greater<int>());
        if(k==n || arr[k-1]<fav || (arr[k-1]==fav && arr[k]!=fav) )
        cout<<"YES"<<endl;
        else if(arr[k-1]==fav)
        cout<<"MAYBE"<<endl;
        else
        cout<<"NO"<<endl;
    }
}