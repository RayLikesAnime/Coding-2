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
        int flag=0;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==0)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(a[0]!=a[1]){
                cout<<"BR";
                for(int i=2;i<n;i++)
                cout<<"B";
            }
            else{
                for(int i=2;i<n;i++)
                cout<<"B";
                cout<<"RB";
            }
            cout<<endl;
        }

    }
}