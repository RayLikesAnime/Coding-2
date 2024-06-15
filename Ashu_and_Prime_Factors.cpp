#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    vector<int>seive(1000001,1);
    vector<int>freq(1000001,1);
    for(int i=2;i*i<=1e6;i++){
        if(seive[i]==1){
            for(int j=i*i;j<=1e6;j+=i){
                if(seive[j]==1){
                    freq[i]++;
                    seive[j]=0;
                }
            }
        }
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2)
        cout<<500000<<endl;
        else
        cout<<freq[n]<<endl;
    }
}