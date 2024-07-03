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
        int c=0;
        for (int i =0;i<n;i++) { 
            for (int j=i+1; j<n; j++) { 
                int prod=arr[i]*arr[j];
                if ((prod) % ((i+1)*(j+1))==0) { 
                    c++; 
                } 
            }
        } 
        cout<<c<<endl;
    }
}