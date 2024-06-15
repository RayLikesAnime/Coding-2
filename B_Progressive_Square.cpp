#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,c,d;
        cin>>n>>c>>d;
        int arr[n*n];
        for(int i=0;i<n*n;i++)
        cin>>arr[i];
        int ar[n*n];
        sort(arr,arr+(n*n));
        ar[0]=arr[0];
        for(int i=1;i<n;i++){
            ar[i]=ar[i-1]+c;
        }
        for(int i=n;i<n*n;i++){
            ar[i]=ar[(n*((i/n)-1))+(i%n)]+d;
        }
        sort(ar,ar+(n*n));
        int flag=0;
        // for(int i=0;i<n*n;i++)
        // cout<<ar[i]<<" ";
        for(int i=0;i<(n*n);i++){
            if(ar[i]!=arr[i]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}