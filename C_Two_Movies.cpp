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
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int j=0;j<n;j++)
        cin>>b[j];
        int sumA=0;
        int sumB=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i])
            sumA+=a[i];
            else if(a[i]<b[i])
            sumB+=b[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                if(a[i]==-1){
                    if(sumA>sumB)
                    sumA+=a[i];
                    else
                    sumB+=a[i];
                }
                else {
                    if(sumA>sumB)
                    sumB+=a[i];
                    else
                    sumA+=a[i];
                }
            }
        }
        cout<<min(sumA,sumB)<<endl;
    }
}