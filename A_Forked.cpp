#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int xk,yk,xq,yq;
        cin>>xk>>yk>>xq>>yq;
        vector<int>kx={xk-a,xk-a,xk-b,xk-b,xk+a,xk+a,xk+b,xk+b};
        vector<int>ky={yk-b,yk+b,yk+a,yk-a,yk+b,yk-b,yk+a,yk-a};
       vector<int>qx={xq-a,xq-a,xq-b,xq-b,xq+a,xq+a,xq+b,xq+b};
        vector<int>qy={yq-b,yq+b,yq+a,yq-a,yq+b,yq-b,yq+a,yq-a};
        int c=0;
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(kx[i]==qx[j] && ky[i]==qy[j])
                c++;
            }
        }
        cout<<c<<endl;


        
    }
}