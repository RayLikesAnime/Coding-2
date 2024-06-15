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
        int f[26]={0};
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if(f[j]==arr[i]){
                cout<<char('a'+j);
                f[j]++;
                break;}
            }
        }
        cout<<endl;
    }
}