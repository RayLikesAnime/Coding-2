#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
#define pp pair<ll,ll>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll health,n;
        cin>>health>>n;
        vector<ll> a(n);
        vector<ll> c(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) cin>>c[i];
        
        priority_queue<pp,vector<pp>,greater<pp> > pq;
        for(int i=0;i<n;i++){
            pq.push(make_pair(0,i));
        }
        
        ll count = 1;
        ll prev = 0,curr = 0;
        while(health>0){
            pp top = pq.top();
            ll curr = top.first;
            while(top.first == curr){
                health -= a[top.second];
                pq.pop();
                pq.push(make_pair(curr+c[top.second],top.second));
                top = pq.top();
            }
            count += curr-prev;
            prev = curr;
        }
        cout<<count<<endl;
    }

    return 0;
}