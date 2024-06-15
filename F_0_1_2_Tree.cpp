#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c!=a+1)
        cout<<-1<<endl;
        else if(a==0 && b==1 && c==1)
        cout<<1<<endl;
        else{
            int len1;
            if(a%2==1){
                if(b>=1){
                len1=((b-1)/c)+1;
                }
                else if(b==0)
                len1=0;
                cout<<(a/2)+1+len1<<endl;
            }
            else{
                if(b>=2)
                len1=((b-2)/c)+1;
                else if(b==1)
                len1=0;
                else if(b==0)
                len1=0;
                cout<<(a/2)+len1<<endl;
            }
        }
    }
}