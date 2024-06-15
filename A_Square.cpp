#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int> >arr(4);
        for(int i=0;i<4;i++){
            int x,y;
            cin>>x>>y;
            arr[i].push_back(x);
            arr[i].push_back(y);
        }
        sort(arr.begin(),arr.end());
        int ans=(arr[2][0]-arr[1][0])*(arr[1][1]-arr[0][1]);
        cout<<abs(ans)<<endl;
    }
}