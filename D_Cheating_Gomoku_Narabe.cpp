#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        int H,W,K;
        cin>>H>>W>>K;
        string grid[H];
        for(int i=0;i<H;i++)
        cin>>grid[i];
        int minOperations = INT_MAX;

    // Check horizontally
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j <= W - K; ++j) {
            int count = 0;
            for (int l = j; l < j + K; ++l) {
                if (grid[i][l] == '.') {
                    count++;
                }
                else if(grid[i][l]=='x'){
                    count=INT_MAX;
                    j=l;
                    break;
                }
            }
            minOperations = min(minOperations, count);
        }
    }

    // Check vertically
    for (int i = 0; i <= H - K; ++i) {
        for (int j = 0; j < W; ++j) {
            int count = 0;
            for (int l = i; l < i + K; ++l) {
                if (grid[l][j] == '.') {
                    count++;
                }
                else if(grid[l][j]=='x'){
                    count=INT_MAX;
                    i=l;
                    break;
                }
            }
            minOperations = min(minOperations, count);
        }
    }

    if (minOperations == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << minOperations << endl;
    }

    }
}