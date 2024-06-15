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
        for(int i=0;i<n;i++){
            if(i%2==0){
            for(int j=0;j<n;j++){
                if(j%2==0)
                cout<<"##";
                else
                cout<<"..";
            }
            cout<<endl;
            for(int j=0;j<n;j++){
                if(j%2==0)
                cout<<"##";
                else
                cout<<"..";
            }
        }
        else{
            for(int j=0;j<n;j++){
                if(j%2==0)
                cout<<"..";
                else
                cout<<"##";
            }
            cout<<endl;
            for(int j=0;j<n;j++){
                if(j%2==0)
                cout<<"..";
                else
                cout<<"##";
            }
        }
        cout<<endl;
        }
    }
}