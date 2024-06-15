#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    string a,b;
    cin>>a>>b;
    int x=(a[0]-'A')-(a[1]-'A');
    int y=(b[0]-'A')-(b[1]-'A');
    if(abs(x)+abs(y)==5 || abs(x)==abs(y))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}