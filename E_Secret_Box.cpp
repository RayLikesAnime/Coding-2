#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, z;
        long long k;
        cin>>x>>y>>z>>k;
        long long maxi = 0;
        for (int a = 1; a <= x; ++a) {
            if (k % a != 0) continue;
                long long d = k / a;
        for (int b = 1; b <= y; ++b) {
            if (d % b != 0) continue; 
            int c = d/ b;
            if (c <= z) {
                long long count = (x - a + 1) * (y - b + 1) * (z - c + 1);
                maxi = max(maxi, count);
            }
        }
    }
    cout<<maxi<<endl;

    }
}