#include<bits/stdc++.h>
using namespace std;
#define int long long int
int mod=1e9+7;
int32_t main(){
    int t=1;
    // cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        int x=0,y=0,z=0;
        int ind1=s.length(),ind2=s.length();
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
            x++;
            if(s[i]=='B')
            y++;
            if(s[i]=='C')
            z++;
        }
        for(int i=0;i<s.length();i++){
            if(s[i]=='A')
            a++;
            else{
                ind1=i;
                break;
            }
        }
        for(int i=ind1;i<s.length();i++){
            if(s[i]=='B')
            b++;
             else{
                ind2=i;
                break;
            }
        }
        for(int i=ind2;i<s.length();i++){
            if(s[i]=='C')
            c++;
             else{
                break;
            }
        }
        if(x==a && y==b && z==c)
        cout<<"Yes"<<endl;
        else
        cout<<"No"<<endl;
    }
}