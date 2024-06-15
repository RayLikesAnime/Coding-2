#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string s1=s.substr(0,2);
        string s2=s.substr(3,2);
        int x=stoi(s1);
        int ans1;
        int y=stoi(s2);
        string ans2;
        if(x>=12){
            ans1=(x>12) ? x-12 :x;
            ans2="PM";
        }
        else{
            ans1=(x==0) ? 12 :x;
            ans2="AM";
        }
        stringstream ss;
        ss<<setw(2)<<setfill('0')<<ans1<<":"<<s2<<" "<<ans2;
        cout<<ss.str()<<endl;
        
    }
}