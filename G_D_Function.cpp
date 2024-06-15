#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    if (b % 2)
        return (((res%mod) * (res%mod))%mod * (a%mod))%mod;
    else
        return ((res%mod) * (res%mod))%mod ;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r,k;
        cin>>l>>r>>k;
        vector<int>v;
        for(int i=1;i<=9;i++){
            int dum=10/(i);
            if(10%i!=0)
            dum++;
            v.push_back(dum);
        }
        if(k>9)
        cout<<0<<endl;
        else{
            if(k==1){
                long long c1=binpow(10,l);
                long long c2=binpow(10,r);
                cout<<(c2-c1+mod)%mod<<endl;
            }
            else{
                long long c1=binpow(v[k-1],r);
                long long c2=binpow(v[k-1],l);
                cout<<(c1-c2+mod)%mod<<endl;
            }
        }
    }
}