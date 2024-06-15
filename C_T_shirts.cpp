#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    string s;
    cin>>s;
    int p=n;
    int ans=0;
    int ts=0;
    for(int i=0;i<m;i++){
        if(s[i]=='0'){
            ts=0;
            n=p;
        }
        else if(s[i]=='1'){
            if(n>0)
            n--;
            else
            ts++;
        }
        else{
            ts++;
        }
        ans=max(ans,ts);
    }
    cout<<ans<<endl;
}