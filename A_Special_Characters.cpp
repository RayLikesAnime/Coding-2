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
        if(n%2==1)
        cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<n/2;i++){
                cout<<(char)('A'+i);
                cout<<(char)('A'+i);
            }
            cout<<endl;
        }
    }
}