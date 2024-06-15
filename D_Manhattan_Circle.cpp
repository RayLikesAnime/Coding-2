#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<char> >v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                char c;
                cin>>c;
                v[i].push_back(c);
            }
        }
        int maxi=0,row=0;
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<m;j++){
                if(v[i][j]=='#')
                cnt++;
            }
            if(cnt>maxi){
                maxi=cnt;
                row=i;
            }
        }
        int center=(maxi+1)/2;
        for(int j=0;j<m;j++){
            if(v[row][j]=='#')
            center--;
            if(center==0){
                cout<<row+1<<" "<<j+1<<endl;
                break;
            }
        }
    }
}