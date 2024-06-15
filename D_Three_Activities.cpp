#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
bool sortbysecdesc(const pair<int,int> &a,const pair<int,int> &b)
{   

    return a.first>b.first;
}
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        vector<pair<int,int> >a;
        vector<pair<int,int> >b;
        vector<pair<int,int> >c;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            a.push_back(make_pair(x,i));
        }
         for(int i=0;i<n;i++){
            int x;
            cin>>x;
            b.push_back(make_pair(x,i));
        }
         for(int i=0;i<n;i++){
            int x;
            cin>>x;
            c.push_back(make_pair(x,i));
        }
        sort(a.begin(),a.end(),sortbysecdesc);
        sort(b.begin(),b.end(),sortbysecdesc);
        sort(c.begin(),c.end(),sortbysecdesc);
        int ans=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                for(int k=0;k<3;k++){
                    if(a[i].second!=b[j].second && b[j].second!=c[k].second && c[k].second!=a[i].second) 
                    ans=max(ans,a[i].first+b[j].first+c[k].first);
                }
            }
        }
        cout<<ans<<endl;


    }
}