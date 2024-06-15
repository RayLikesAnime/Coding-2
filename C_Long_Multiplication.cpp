#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string x,y;
        cin>>x>>y;
        string a=x;
        string b=y;
        int n=x.length();
        int flag=0;
        for(int i=0;i<n;i++){
            if(a[i]<b[i])
            swap(a[i],b[i]);
            else if(a[i]==b[i])
            continue;
            for(int j=i+1;j<n;j++){
                if(a[j]>=b[j])
                swap(a[j],b[j]);
            }
            break;
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }
}