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
        string s;
        cin>>s;
        int a=0;
        for(int i=0;i<n;i++)
        if(s[i]=='0')
        a++;
        if(a==1 || a%2==0)
        cout<<"BOB"<<endl;
        else
        cout<<"ALICE"<<endl;
    }
}