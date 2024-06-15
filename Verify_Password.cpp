#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        s=s+" ";
        int flag=0;
        vector<char>d;vector<char>a;
        for(int i=0;i<n;i++){
            if(s[i]>='a' && s[i]<='z'){
                if(s[i+1]>='0' && s[i+1]<='9'){
                    flag=1;
                    break;
                }
            }
            if(s[i]>='a' && s[i]<='z'){
                a.push_back(s[i]);
                            }
            else
            d.push_back(s[i]);

        }
        for(int i=1;i<a.size();i++){
            if(a[i]<a[i-1]){
                flag=1;
                break;
            }
        }
        for(int i=1;i<d.size();i++){
            if(d[i]<d[i-1]){
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}