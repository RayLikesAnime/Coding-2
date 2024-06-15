#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x=0,y=0;
        for(int i=0;i<n;i++){
            int a,b;
            cin>>a>>b;
            x+=a;
            y+=b;
        }
        if(x==y)
        cout<<"Draw";
        else if(x>y)
        cout<<"Takahashi";
        else
        cout<<"Aoki"<<endl;
    }
}