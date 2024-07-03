#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb push_back

const int N = 1e5 + 5;
int n, m, mx[N], ans;
bool see[N];
vector <int> g[N];

void dfs(int x){
	if(see[x]) return;
	see[x] = 1;
	for(int i : g[x]){
		dfs(i);
		mx[x] = max(mx[x], mx[i] + 1);
	}
}

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	cin >> n >> m;
	for(int x, y, i = 0; i < m; i++){
		cin >> x >> y;
		g[x].pb(y);
	}
	for(int i = 1; i <= n; i++){
		if(!see[i]){
			dfs(i);
		}
	}
	for(int i = 1; i <= n; i++){
		ans = max(ans, mx[i]);
	}
	cout << ans;
}