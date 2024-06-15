#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int h,w,xa,ya,xb,yb;
        cin>>h>>w>>xa>>ya>>xb>>yb;
        if(abs(xa-xb)%2==0){
            if(ya>yb)
            cout<<"Draw"<<endl;
            else
            cout<<"Bob"<<endl;
        }
        else{
            if(ya>yb)
            cout<<"Draw"<<endl;
            else
            cout<<"Alice"<<endl;
        }
    }
}