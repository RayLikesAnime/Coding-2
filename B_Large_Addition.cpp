#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int flag=0;
        int c=1;
        if(s[s.size()-1]=='9')
        flag=1;
        if(s[0]!='1')
        flag=1;
        for(int i=s.size()-2;i>=1;i--){
            if(s[i]=='0')
            flag=1;
        }
        if(flag==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;


        // int flag=0;
        // for(int i=s.size()-1;i>0;i--){
        //     int j=i-1;
        //     if(s[i]=='9'){
        //         flag=1;
        //         break;
        //     }
        //     while(j>=0 && s[j]=='0'){
        //         s[j]='9';
        //     }
        //     s[j]--;
        // }
        // if(flag==1)
        // cout<<"NO"<<endl;
        // else
        // cout<<"YES"<<endl;
        // if(s[s.size()-1]=='9')
        // cout<<"NO"<<endl;
        // else if(s[0]!='1')
        // cout<<"NO"<<endl;
        // else
        // cout<<"YES"<<endl;
        // string s=to_string(n);
        // int a=n/2;
        // int b=n-(n/2);
        // string s1=to_string(a);
        // string s2=to_string(b);
        // int flag=0;
        // for(int i=0;i<s1.size();i++){
        //     if(s1[i]<'5'){
        //         flag=1;
        //         break;
        //     }
        // }
        // for(int i=0;i<s2.size();i++){
        //     if(s2[i]<'5'){
        //         flag=1;
        //         break;
        //     }
        // }
        // if(flag==1)
        // cout<<"NO"<<endl;
        // else
        // cout<<"YES"<<endl;
    }
}