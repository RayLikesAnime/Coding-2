#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;

vector<vector<int> > transpose(vector<vector<int> >& mat) {
    int n = mat.size();
    vector<vector<int> > t(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            t[j][i] = mat[i][j];
        }
    }
    return t;
}

void solve(){
    int n,m;
        cin>>n>>m;
        vector<vector<int> >a(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                a[i][j]=x;
            }
        }
        vector<vector<int> >b(n,vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x;
                cin>>x;
                b[i][j]=x;
            }
        }

        if(n==m){
            set<set<int> >stt;
             for (auto v : a) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : b) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        a = transpose(a);
        b = transpose(b);
        stt.clear();
        for (auto v : a) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : b) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
                
            }
        }
        cout << "YES" << endl;
    } else {
        set<set<int> > stt;
        for (auto v : a) {
            set<int> cur(v.begin(), v.end());
            stt.insert(cur);
        }
        for (auto v : b) {
            set<int> cur(v.begin(), v.end());
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        stt.clear();
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(a[i][j]);
            }
            stt.insert(cur);
        }
        for (int j = 0; j < m; j++) {
            set<int> cur;
            for (int i = 0; i < n; i++) {
                cur.insert(b[i][j]);
            }
            if (stt.find(cur) == stt.end()) {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }

}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }   
}