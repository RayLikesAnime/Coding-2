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

        int maxi=0;
        int sum=0;
        int flag=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,a[i]);
            sum+=a[i];
            if(sum==(2*maxi))
            flag++;
        }
        cout<<flag<<endl;
    }
}