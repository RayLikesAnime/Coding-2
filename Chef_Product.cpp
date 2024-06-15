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
        long long ans=0;
        if(n%2==0){
            long long n1=n;
            ans=(n1/4);
            long long ans2=sqrtl(ans);
            cout<<(long long)ans2<<endl;
        }
        else{
            ans=n++;
            long long ans1=(sqrtl(ans));
            ans1++;
            long long ans2=((ans1)/2);
            cout<<(long long)ans2<<endl;

        }
    }
}